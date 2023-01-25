/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

/**
 * Example of using DEBUG_USART to write "Hello World" using the IO abstraction.
 *
 * Since the driver is asynchronous we need to use statically allocated memory for string
 * because driver initiates transfer and then returns before the transmission is completed.
 *
 * Once transfer has been completed the tx_cb function will be called.
 */

static uint8_t example_DEBUG_USART[12] = "Hello World!";

static void tx_cb_DEBUG_USART(const struct usart_async_descriptor *const io_descr)
{
	/* Transfer completed */
}

void DEBUG_USART_example(void)
{
	struct io_descriptor *io;

	usart_async_register_callback(&DEBUG_USART, USART_ASYNC_TXC_CB, tx_cb_DEBUG_USART);
	/*usart_async_register_callback(&DEBUG_USART, USART_ASYNC_RXC_CB, rx_cb);
	usart_async_register_callback(&DEBUG_USART, USART_ASYNC_ERROR_CB, err_cb);*/
	usart_async_get_io_descriptor(&DEBUG_USART, &io);
	usart_async_enable(&DEBUG_USART);

	io_write(io, example_DEBUG_USART, 12);
}

void I2C_0_example(void)
{
	struct io_descriptor *I2C_0_io;

	i2c_m_sync_get_io_descriptor(&I2C_0, &I2C_0_io);
	i2c_m_sync_enable(&I2C_0);
	i2c_m_sync_set_slaveaddr(&I2C_0, 0x12, I2C_M_SEVEN);
	io_write(I2C_0_io, (uint8_t *)"Hello World!", 12);
}

/**
 * Example of using SPI_0 to write "Hello World" using the IO abstraction.
 */
static uint8_t example_SPI_0[12] = "Hello World!";

void SPI_0_example(void)
{
	struct io_descriptor *io;
	spi_m_sync_get_io_descriptor(&SPI_0, &io);

	spi_m_sync_enable(&SPI_0);
	io_write(io, example_SPI_0, 12);
}

/**
 * Example of using DCE_USART to write "Hello World" using the IO abstraction.
 *
 * Since the driver is asynchronous we need to use statically allocated memory for string
 * because driver initiates transfer and then returns before the transmission is completed.
 *
 * Once transfer has been completed the tx_cb function will be called.
 */

static uint8_t example_DCE_USART[12] = "Hello World!";

static void tx_cb_DCE_USART(const struct usart_async_descriptor *const io_descr)
{
	/* Transfer completed */
}

void DCE_USART_example(void)
{
	struct io_descriptor *io;

	usart_async_register_callback(&DCE_USART, USART_ASYNC_TXC_CB, tx_cb_DCE_USART);
	/*usart_async_register_callback(&DCE_USART, USART_ASYNC_RXC_CB, rx_cb);
	usart_async_register_callback(&DCE_USART, USART_ASYNC_ERROR_CB, err_cb);*/
	usart_async_get_io_descriptor(&DCE_USART, &io);
	usart_async_enable(&DCE_USART);

	io_write(io, example_DCE_USART, 12);
}

/**
 * Example of using WDT_0.
 */
void WDT_0_example(void)
{
	uint32_t clk_rate;
	uint16_t timeout_period;

	clk_rate       = 1000;
	timeout_period = 4096;
	wdt_set_timeout_period(&WDT_0, clk_rate, timeout_period);
	wdt_enable(&WDT_0);
}
