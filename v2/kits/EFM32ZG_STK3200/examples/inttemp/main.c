/**************************************************************************//**
 * @file
 * @brief Internal temperature sensor example for EFM32ZG_STK3200
 * @details
 *   Show temperature using internal sensor on the EFM32.
 *
 * @par Usage
 * @li Buttons toggle Celcius and Fahrenheit temperature modes.
 *
 * @version 3.20.5
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "em_device.h"
#include "em_adc.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_emu.h"
#include "em_gpio.h"
#include "em_rtc.h"

#include "display.h"
#include "retargettextdisplay.h"

static volatile int      showFahrenheit;
static volatile uint32_t rtcTick;

static void       AdcSetup(void);
static uint32_t   AdcRead( void );
static float32_t  ConvertToCelsius(int32_t adcSample);
static float32_t  ConvertToFahrenheit(int32_t adcSample);
static void       GpioSetup(void);

/**************************************************************************//**
 * @brief RTC Interrupt handler. Used for updating the time.
 *****************************************************************************/
void RTC_IRQHandler(void)
{
  rtcTick++;
  RTC_IntClear(RTC_IEN_COMP0);
}

/**************************************************************************//**
 * @brief GPIO Interrupt handler (PC9) Fahrenheit pushbutton
 *****************************************************************************/
void GPIO_ODD_IRQHandler(void)
{
  /* Acknowledge interrupt */
  GPIO_IntClear(1 << 9);

  showFahrenheit = 1;
}

/**************************************************************************//**
 * @brief GPIO Interrupt handler (PC8) Celcius pushbutton
 *****************************************************************************/
void GPIO_EVEN_IRQHandler(void)
{
  /* Acknowledge interrupt */
  GPIO_IntClear(1 << 8);

  showFahrenheit = 0;
}

/**************************************************************************//**
 * @brief  Main function
 *****************************************************************************/
int main(void)
{
  int temp;
  int oldShowFahrenheit;

  /* Chip errata */
  CHIP_Init();

  /* Initialize the display module. */
  DISPLAY_Init();

  /* Retarget stdio to the display. */
  RETARGET_TextDisplayInit();

  /* Initialize GPIO for Celcius(PB0) and Fahrenheit(PB1) pushbuttons. */
  GpioSetup();

  /* Initialize ADC for reading internal temperature sensor. */
  AdcSetup();

  NVIC_EnableIRQ(RTC_IRQn);
  RTC_IntEnable(RTC_IEN_COMP0);

  printf("\n\n\n\n\n Temperature is\n\n\n\n\n" );

  while (1)
  {
    /* Read the temperature. */
    temp = AdcRead();

    if (showFahrenheit)
    {
      temp = (int)(ConvertToFahrenheit( temp ) * 10);

      /* Output measurement on display. */
      printf("\r     %2d.%1d F", (temp / 10), abs(temp % 10) );
    }
    else
    {
      temp = (int)(ConvertToCelsius( temp ) * 10);

      /* Output measurement on display. */
      printf("\r     %2d.%1d C", (temp / 10), abs(temp % 10) );
    }

    /* Wait for one second before continuing for new measurements, or
       until a change in display configuration. */
    oldShowFahrenheit = showFahrenheit;
    while ((rtcTick % LS013B7DH03_POLARITY_INVERSION_FREQUENCY) 
           && (oldShowFahrenheit == showFahrenheit))
    {
      EMU_EnterEM2(true);
    }
  }
}

/**************************************************************************//**
 * @brief Initialize ADC for temperature sensor readings in single poin
 *****************************************************************************/
static void AdcSetup(void)
{
  /* Enable ADC clock */
  CMU_ClockEnable( cmuClock_ADC0, true);

  /* Base the ADC configuration on the default setup. */
  ADC_Init_TypeDef       init  = ADC_INIT_DEFAULT;
  ADC_InitSingle_TypeDef sInit = ADC_INITSINGLE_DEFAULT;

  /* Initialize timebases */
  init.timebase = ADC_TimebaseCalc(0);
  init.prescale = ADC_PrescaleCalc(400000, 0);
  ADC_Init(ADC0, &init);

  /* Set input to temperature sensor. Reference must be 1.25V */
  sInit.reference = adcRef1V25;
  sInit.input     = adcSingleInpTemp;
  ADC_InitSingle(ADC0, &sInit);
}

/**************************************************************************//**
 * @brief  Do one ADC conversion
 * @return ADC conversion result
 *****************************************************************************/
static uint32_t AdcRead( void )
{
  ADC_Start(ADC0, adcStartSingle);
  while ( ( ADC0->STATUS & ADC_STATUS_SINGLEDV ) == 0 ){}
  return ADC_DataSingleGet(ADC0);
}

/**************************************************************************//**
 * @brief Convert ADC sample values to celsius.
 * @note See section 22.3.4.2 Temperature measurement in the reference manual
 *       for details on this calculation.
 * @param adcSample Raw value from ADC to be converted to celsius
 * @return The temperature in degrees celsius.
 *****************************************************************************/
static float32_t ConvertToCelsius(int32_t adcSample)
{
  float32_t temp;

  /* Factory calibration temperature from device information page. */
  int32_t cal_temp_0 = ((DEVINFO->CAL & _DEVINFO_CAL_TEMP_MASK)
                             >> _DEVINFO_CAL_TEMP_SHIFT);
  /* Factory calibration value from device information page. */
  int32_t cal_value_0 = ((DEVINFO->ADC0CAL2 & _DEVINFO_ADC0CAL2_TEMP1V25_MASK)
                          >> _DEVINFO_ADC0CAL2_TEMP1V25_SHIFT);

  /* Temperature gradient (from datasheet) */
  float32_t t_grad = -6.27;

  temp = (cal_temp_0 - ((cal_value_0 - adcSample) / t_grad));

  return temp;
}

/**************************************************************************//**
 * @brief Convert ADC sample values to fahrenheit
 * @param adcSample Raw value from ADC to be converted to fahrenheit
 * @return The temperature in degrees fahrenheit
 *****************************************************************************/
static float32_t ConvertToFahrenheit(int32_t adcSample)
{
  float32_t celsius;
  float32_t fahrenheit;
  celsius = ConvertToCelsius(adcSample);

  fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;

  return fahrenheit;
}

/**************************************************************************//**
 * @brief Setup GPIO interrupt for pushbuttons.
 *****************************************************************************/
static void GpioSetup(void)
{
  /* Enable GPIO clock */
  CMU_ClockEnable(cmuClock_GPIO, true);

  /* Configure PC8 as input and enable interrupt  */
  GPIO_PinModeSet(gpioPortC, 8, gpioModeInputPull, 1);
  GPIO_IntConfig(gpioPortC, 8, false, true, true);

  NVIC_ClearPendingIRQ(GPIO_EVEN_IRQn);
  NVIC_EnableIRQ(GPIO_EVEN_IRQn);

  /* Configure PC9 as input and enable interrupt */
  GPIO_PinModeSet(gpioPortC, 9, gpioModeInputPull, 1);
  GPIO_IntConfig( gpioPortC, 9, false, true, true);

  NVIC_ClearPendingIRQ(GPIO_ODD_IRQn);
  NVIC_EnableIRQ(GPIO_ODD_IRQn);
}
