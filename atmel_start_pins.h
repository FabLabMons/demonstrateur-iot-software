/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD21 has 8 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7

#define PWR_GOOD_3V8 GPIO(GPIO_PORTA, 2)
#define LED_R GPIO(GPIO_PORTA, 5)
#define LED_G GPIO(GPIO_PORTA, 6)
#define LED_B GPIO(GPIO_PORTA, 7)
#define DEBUG_TX GPIO(GPIO_PORTA, 8)
#define DEBUG_RX GPIO(GPIO_PORTA, 9)
#define DCE_RTS GPIO(GPIO_PORTA, 14)
#define OSC32_OUT GPIO(GPIO_PORTA, 15)
#define SDA GPIO(GPIO_PORTA, 16)
#define SCL GPIO(GPIO_PORTA, 17)
#define DCE_W_DIS GPIO(GPIO_PORTA, 18)
#define DCE_RESET GPIO(GPIO_PORTA, 19)
#define SPI_MISO GPIO(GPIO_PORTA, 20)
#define SPI_CS GPIO(GPIO_PORTA, 21)
#define SPI_MOSI GPIO(GPIO_PORTA, 22)
#define SPI_SCK GPIO(GPIO_PORTA, 23)
#define DCE_PWRKEY GPIO(GPIO_PORTB, 1)
#define BUTTON GPIO(GPIO_PORTB, 4)
#define DCE_RX GPIO(GPIO_PORTB, 12)
#define DCE_TX GPIO(GPIO_PORTB, 13)
#define DCE_CTS GPIO(GPIO_PORTB, 15)
#define EN_3V8 GPIO(GPIO_PORTB, 17)

#endif // ATMEL_START_PINS_H_INCLUDED
