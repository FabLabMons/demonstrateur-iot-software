/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

/*! The buffer size for USART */
#define DEBUG_USART_BUFFER_SIZE 16

/*! The buffer size for USART */
#define DCE_USART_BUFFER_SIZE 16

struct usart_async_descriptor DEBUG_USART;
struct spi_m_sync_descriptor  SPI_0;
struct usart_async_descriptor DCE_USART;

static uint8_t DEBUG_USART_buffer[DEBUG_USART_BUFFER_SIZE];
static uint8_t DCE_USART_buffer[DCE_USART_BUFFER_SIZE];

struct i2c_m_sync_desc I2C_0;

struct wdt_descriptor WDT_0;

/**
 * \brief USART Clock initialization function
 *
 * Enables register interface and peripheral clock
 */
void DEBUG_USART_CLOCK_init()
{

	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM0);
	_gclk_enable_channel(SERCOM0_GCLK_ID_CORE, CONF_GCLK_SERCOM0_CORE_SRC);
}

/**
 * \brief USART pinmux initialization function
 *
 * Set each required pin to USART functionality
 */
void DEBUG_USART_PORT_init()
{

	gpio_set_pin_function(DEBUG_TX, PINMUX_PA08C_SERCOM0_PAD0);

	gpio_set_pin_function(DEBUG_RX, PINMUX_PA09C_SERCOM0_PAD1);
}

/**
 * \brief USART initialization function
 *
 * Enables USART peripheral, clocks and initializes USART driver
 */
void DEBUG_USART_init(void)
{
	DEBUG_USART_CLOCK_init();
	usart_async_init(&DEBUG_USART, SERCOM0, DEBUG_USART_buffer, DEBUG_USART_BUFFER_SIZE, (void *)NULL);
	DEBUG_USART_PORT_init();
}

void I2C_0_PORT_init(void)
{

	gpio_set_pin_pull_mode(SDA,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(SDA, PINMUX_PA16C_SERCOM1_PAD0);

	gpio_set_pin_pull_mode(SCL,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(SCL, PINMUX_PA17C_SERCOM1_PAD1);
}

void I2C_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM1);
	_gclk_enable_channel(SERCOM1_GCLK_ID_CORE, CONF_GCLK_SERCOM1_CORE_SRC);
	_gclk_enable_channel(SERCOM1_GCLK_ID_SLOW, CONF_GCLK_SERCOM1_SLOW_SRC);
}

void I2C_0_init(void)
{
	I2C_0_CLOCK_init();
	i2c_m_sync_init(&I2C_0, SERCOM1);
	I2C_0_PORT_init();
}

void SPI_0_PORT_init(void)
{

	gpio_set_pin_level(SPI_MOSI,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(SPI_MOSI, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(SPI_MOSI, PINMUX_PA22C_SERCOM3_PAD0);

	gpio_set_pin_level(SPI_SCK,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(SPI_SCK, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(SPI_SCK, PINMUX_PA23C_SERCOM3_PAD1);

	// Set pin direction to input
	gpio_set_pin_direction(SPI_MISO, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(SPI_MISO,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(SPI_MISO, PINMUX_PA20D_SERCOM3_PAD2);
}

void SPI_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM3);
	_gclk_enable_channel(SERCOM3_GCLK_ID_CORE, CONF_GCLK_SERCOM3_CORE_SRC);
}

void SPI_0_init(void)
{
	SPI_0_CLOCK_init();
	spi_m_sync_init(&SPI_0, SERCOM3);
	SPI_0_PORT_init();
}

/**
 * \brief USART Clock initialization function
 *
 * Enables register interface and peripheral clock
 */
void DCE_USART_CLOCK_init()
{

	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM4);
	_gclk_enable_channel(SERCOM4_GCLK_ID_CORE, CONF_GCLK_SERCOM4_CORE_SRC);
}

/**
 * \brief USART pinmux initialization function
 *
 * Set each required pin to USART functionality
 */
void DCE_USART_PORT_init()
{

	gpio_set_pin_function(DCE_RX, PINMUX_PB12C_SERCOM4_PAD0);

	gpio_set_pin_function(DCE_TX, PINMUX_PB13C_SERCOM4_PAD1);
}

/**
 * \brief USART initialization function
 *
 * Enables USART peripheral, clocks and initializes USART driver
 */
void DCE_USART_init(void)
{
	DCE_USART_CLOCK_init();
	usart_async_init(&DCE_USART, SERCOM4, DCE_USART_buffer, DCE_USART_BUFFER_SIZE, (void *)NULL);
	DCE_USART_PORT_init();
}

void WDT_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBA, WDT);
	_gclk_enable_channel(WDT_GCLK_ID, CONF_GCLK_WDT_SRC);
}

void WDT_0_init(void)
{
	WDT_0_CLOCK_init();
	wdt_init(&WDT_0, WDT);
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA02

	// Set pin direction to input
	gpio_set_pin_direction(PWR_GOOD_3V8, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(PWR_GOOD_3V8,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(PWR_GOOD_3V8, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA05

	gpio_set_pin_level(LED_R,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LED_R, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LED_R, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA06

	gpio_set_pin_level(LED_G,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LED_G, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LED_G, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA07

	gpio_set_pin_level(LED_B,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LED_B, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LED_B, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA14

	gpio_set_pin_function(DCE_RTS, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA15

	gpio_set_pin_direction(OSC32_OUT,
	                       // <y> Pin direction
	                       // <id> pad_direction
	                       // <GPIO_DIRECTION_OFF"> Off
	                       // <GPIO_DIRECTION_IN"> In
	                       // <GPIO_DIRECTION_OUT"> Out
	                       GPIO_DIRECTION_OUT);

	gpio_set_pin_level(OSC32_OUT,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_pull_mode(OSC32_OUT,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(OSC32_OUT,
	                      // <y> Pin function
	                      // <id> pad_function
	                      // <i> Auto : use driver pinmux if signal is imported by driver, else turn off function
	                      // <GPIO_PIN_FUNCTION_OFF"> Auto
	                      // <GPIO_PIN_FUNCTION_OFF"> Off
	                      // <GPIO_PIN_FUNCTION_A"> A
	                      // <GPIO_PIN_FUNCTION_B"> B
	                      // <GPIO_PIN_FUNCTION_C"> C
	                      // <GPIO_PIN_FUNCTION_D"> D
	                      // <GPIO_PIN_FUNCTION_E"> E
	                      // <GPIO_PIN_FUNCTION_F"> F
	                      // <GPIO_PIN_FUNCTION_G"> G
	                      // <GPIO_PIN_FUNCTION_H"> H
	                      GPIO_PIN_FUNCTION_H);

	// GPIO on PA18

	gpio_set_pin_level(DCE_W_DIS,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(DCE_W_DIS, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(DCE_W_DIS, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA19

	gpio_set_pin_level(DCE_RESET,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   true);

	// Set pin direction to output
	gpio_set_pin_direction(DCE_RESET, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(DCE_RESET, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA21

	gpio_set_pin_level(SPI_CS,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   true);

	// Set pin direction to output
	gpio_set_pin_direction(SPI_CS, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(SPI_CS, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB01

	gpio_set_pin_level(DCE_PWRKEY,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(DCE_PWRKEY, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(DCE_PWRKEY, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB04

	// Set pin direction to input
	gpio_set_pin_direction(BUTTON, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(BUTTON,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(BUTTON, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB15

	// Set pin direction to input
	gpio_set_pin_direction(DCE_CTS, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(DCE_CTS,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(DCE_CTS, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB17

	gpio_set_pin_level(EN_3V8,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(EN_3V8, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(EN_3V8, GPIO_PIN_FUNCTION_OFF);

	DEBUG_USART_init();

	I2C_0_init();

	SPI_0_init();
	DCE_USART_init();

	WDT_0_init();
}
