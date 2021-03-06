/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

/*
 * Register definitions for the IPQ GSBI Controller
 */

#ifndef _IPQ806X_SPI_H_
#define _IPQ806X_SPI_H_

#include <spi-generic.h>
#include <soc/iomap.h>

#define QUP5_BASE	((uint32_t)GSBI_QUP5_BASE)
#define QUP6_BASE	((uint32_t)GSBI_QUP6_BASE)
#define QUP7_BASE	((uint32_t)GSBI_QUP7_BASE)

#define GSBI5_QUP5_REG_BASE		(QUP5_BASE + 0x00000000)
#define GSBI6_QUP6_REG_BASE		(QUP6_BASE + 0x00000000)
#define GSBI7_QUP7_REG_BASE		(QUP7_BASE + 0x00000000)

#define GSBI5_REG_BASE			((uint32_t)(GSBI5_BASE + 0x00000000))
#define GSBI6_REG_BASE			((uint32_t)(GSBI6_BASE + 0x00000000))
#define GSBI7_REG_BASE			((uint32_t)(GSBI7_BASE + 0x00000000))

#define BOOT_SPI_PORT5_BASE		QUP5_BASE
#define BOOT_SPI_PORT6_BASE		QUP6_BASE
#define BOOT_SPI_PORT7_BASE		QUP7_BASE

#define GSBI5_SPI_CONFIG_REG		(GSBI5_QUP5_REG_BASE + 0x00000300)
#define GSBI6_SPI_CONFIG_REG		(GSBI6_QUP6_REG_BASE + 0x00000300)
#define GSBI7_SPI_CONFIG_REG		(GSBI7_QUP7_REG_BASE + 0x00000300)

#define GSBI5_SPI_IO_CONTROL_REG	(GSBI5_QUP5_REG_BASE + 0x00000304)
#define GSBI6_SPI_IO_CONTROL_REG	(GSBI6_QUP6_REG_BASE + 0x00000304)
#define GSBI7_SPI_IO_CONTROL_REG	(GSBI7_QUP7_REG_BASE + 0x00000304)

#define GSBI5_SPI_ERROR_FLAGS_REG	(GSBI5_QUP5_REG_BASE + 0x00000308)
#define GSBI6_SPI_ERROR_FLAGS_REG	(GSBI6_QUP6_REG_BASE + 0x00000308)
#define GSBI7_SPI_ERROR_FLAGS_REG	(GSBI7_QUP7_REG_BASE + 0x00000308)

#define GSBI5_SPI_ERROR_FLAGS_EN_REG	(GSBI5_QUP5_REG_BASE + 0x0000030c)
#define GSBI6_SPI_ERROR_FLAGS_EN_REG	(GSBI6_QUP6_REG_BASE + 0x0000030c)
#define GSBI7_SPI_ERROR_FLAGS_EN_REG	(GSBI7_QUP7_REG_BASE + 0x0000030c)

#define GSBI5_GSBI_CTRL_REG_REG		(GSBI5_REG_BASE + 0x00000000)
#define GSBI6_GSBI_CTRL_REG_REG		(GSBI6_REG_BASE + 0x00000000)
#define GSBI7_GSBI_CTRL_REG_REG		(GSBI7_REG_BASE + 0x00000000)

#define GSBI5_QUP_CONFIG_REG		(GSBI5_QUP5_REG_BASE + 0x00000000)
#define GSBI6_QUP_CONFIG_REG		(GSBI6_QUP6_REG_BASE + 0x00000000)
#define GSBI7_QUP_CONFIG_REG		(GSBI7_QUP7_REG_BASE + 0x00000000)

#define GSBI5_QUP_ERROR_FLAGS_REG	(GSBI5_QUP5_REG_BASE      + 0x0000001c)
#define GSBI6_QUP_ERROR_FLAGS_REG	(GSBI6_QUP6_REG_BASE      + 0x0000001c)
#define GSBI7_QUP_ERROR_FLAGS_REG	(GSBI7_QUP7_REG_BASE      + 0x0000001c)

#define GSBI5_QUP_ERROR_FLAGS_EN_REG	(GSBI5_QUP5_REG_BASE + 0x00000020)
#define GSBI6_QUP_ERROR_FLAGS_EN_REG	(GSBI6_QUP6_REG_BASE + 0x00000020)
#define GSBI7_QUP_ERROR_FLAGS_EN_REG	(GSBI7_QUP7_REG_BASE + 0x00000020)

#define GSBI5_QUP_OPERATIONAL_REG	(GSBI5_QUP5_REG_BASE + 0x00000018)
#define GSBI6_QUP_OPERATIONAL_REG	(GSBI6_QUP6_REG_BASE + 0x00000018)
#define GSBI7_QUP_OPERATIONAL_REG	(GSBI7_QUP7_REG_BASE + 0x00000018)

#define GSBI5_QUP_IO_MODES_REG		(GSBI5_QUP5_REG_BASE + 0x00000008)
#define GSBI6_QUP_IO_MODES_REG		(GSBI6_QUP6_REG_BASE + 0x00000008)
#define GSBI7_QUP_IO_MODES_REG		(GSBI7_QUP7_REG_BASE + 0x00000008)

#define GSBI5_QUP_STATE_REG		(GSBI5_QUP5_REG_BASE + 0x00000004)
#define GSBI6_QUP_STATE_REG		(GSBI6_QUP6_REG_BASE + 0x00000004)
#define GSBI7_QUP_STATE_REG		(GSBI7_QUP7_REG_BASE + 0x00000004)

#define GSBI5_QUP_OUT_FIFO_WORD_CNT_REG	(GSBI5_QUP5_REG_BASE + 0x0000010c)
#define GSBI6_QUP_OUT_FIFO_WORD_CNT_REG	(GSBI6_QUP6_REG_BASE + 0x0000010c)
#define GSBI7_QUP_OUT_FIFO_WORD_CNT_REG	(GSBI7_QUP7_REG_BASE + 0x0000010c)

#define GSBI5_QUP_IN_FIFO_WORD_CNT_REG	(GSBI5_QUP5_REG_BASE + 0x00000214)
#define GSBI6_QUP_IN_FIFO_WORD_CNT_REG	(GSBI6_QUP6_REG_BASE + 0x00000214)
#define GSBI7_QUP_IN_FIFO_WORD_CNT_REG	(GSBI7_QUP7_REG_BASE + 0x00000214)

#define GSBI5_QUP_INPUT_FIFOc_REG(c) \
		(GSBI5_QUP5_REG_BASE + 0x00000218 + 4 * (c))
#define GSBI6_QUP_INPUT_FIFOc_REG(c) \
		(GSBI6_QUP6_REG_BASE + 0x00000218 + 4 * (c))
#define GSBI7_QUP_INPUT_FIFOc_REG(c) \
		(GSBI7_QUP7_REG_BASE + 0x00000218 + 4 * (c))

#define GSBI5_QUP_OUTPUT_FIFOc_REG(c) \
		(GSBI5_QUP5_REG_BASE + 0x00000110 + 4 * (c))
#define GSBI6_QUP_OUTPUT_FIFOc_REG(c) \
		(GSBI6_QUP6_REG_BASE + 0x00000110 + 4 * (c))
#define GSBI7_QUP_OUTPUT_FIFOc_REG(c) \
		(GSBI7_QUP7_REG_BASE + 0x00000110 + 4 * (c))

#define GSBI5_QUP_MX_INPUT_COUNT_REG	(GSBI5_QUP5_REG_BASE + 0x00000200)
#define GSBI6_QUP_MX_INPUT_COUNT_REG	(GSBI6_QUP6_REG_BASE + 0x00000200)
#define GSBI7_QUP_MX_INPUT_COUNT_REG	(GSBI7_QUP7_REG_BASE + 0x00000200)

#define GSBI5_QUP_MX_OUTPUT_COUNT_REG	(GSBI5_QUP5_REG_BASE + 0x00000100)
#define GSBI6_QUP_MX_OUTPUT_COUNT_REG	(GSBI6_QUP6_REG_BASE + 0x00000100)
#define GSBI7_QUP_MX_OUTPUT_COUNT_REG	(GSBI7_QUP7_REG_BASE + 0x00000100)

#define GSBI5_QUP_SW_RESET_REG		(GSBI5_QUP5_REG_BASE + 0x0000000c)
#define GSBI6_QUP_SW_RESET_REG		(GSBI6_QUP6_REG_BASE + 0x0000000c)
#define GSBI7_QUP_SW_RESET_REG		(GSBI7_QUP7_REG_BASE + 0x0000000c)

#define CLK_CTL_REG_BASE		0x00900000
#define GSBIn_RESET_REG(n) \
		(CLK_CTL_REG_BASE      + 0x000029dc + 32 * ((n)-1))

#define SFAB_AHB_S3_FCLK_CTL_REG \
		(CLK_CTL_REG_BASE      + 0x0000216c)
#define CFPB_CLK_NS_REG \
		(CLK_CTL_REG_BASE      + 0x0000264c)
#define SFAB_CFPB_S_HCLK_CTL_REG \
		(CLK_CTL_REG_BASE      + 0x000026c0)
#define CFPB_SPLITTER_HCLK_CTL_REG \
		(CLK_CTL_REG_BASE      + 0x000026e0)
#define CFPB0_HCLK_CTL_REG \
		(CLK_CTL_REG_BASE      + 0x00002650)
#define CFPB2_HCLK_CTL_REG \
		(CLK_CTL_REG_BASE      + 0x00002658)
#define GSBIn_HCLK_CTL_REG(n) \
		(CLK_CTL_REG_BASE      + 0x000029c0 + 32 * ((n)-1))
#define GSBIn_QUP_APPS_NS_REG(n) \
	(CLK_CTL_REG_BASE      + 0x000029cc + 32 * ((n)-1))
#define GSBIn_QUP_APPS_MD_REG(n) \
		(CLK_CTL_REG_BASE      + 0x000029c8 + 32 * ((n)-1))
#define CLK_HALT_CFPB_STATEB_REG \
		(CLK_CTL_REG_BASE      + 0x00002fd0)

#define GSBI5_HCLK				23
#define GSBI6_HCLK				19
#define GSBI7_HCLK				15
#define GSBI5_QUP_APPS_CLK			20
#define GSBI6_QUP_APPS_CLK			16
#define GSBI7_QUP_APPS_CLK			12
#define GSBI_CLK_BRANCH_ENA_MSK			(1 << 4)
#define GSBI_CLK_BRANCH_ENA			(1 << 4)
#define GSBI_CLK_BRANCH_DIS			(0 << 4)
#define QUP_CLK_BRANCH_ENA_MSK			(1 << 9)
#define QUP_CLK_BRANCH_ENA			(1 << 9)
#define QUP_CLK_BRANCH_DIS			(0 << 9)
#define CLK_ROOT_ENA_MSK			(1 << 11)
#define CLK_ROOT_ENA				(1 << 11)
#define CLK_ROOT_DIS				(0 << 11)

#define QUP_STATE_VALID_BIT			2
#define QUP_STATE_VALID				1
#define QUP_STATE_MASK				0x3
#define QUP_CONFIG_MINI_CORE_MSK		(0x0F << 8)
#define QUP_CONFIG_MINI_CORE_SPI		(1 << 8)
#define SPI_QUP_CONF_INPUT_MSK			(1 << 7)
#define SPI_QUP_CONF_INPUT_ENA			(0 << 7)
#define SPI_QUP_CONF_NO_INPUT			(1 << 7)
#define SPI_QUP_CONF_OUTPUT_MSK			(1 << 6)
#define SPI_QUP_CONF_OUTPUT_ENA			(0 << 6)
#define SPI_QUP_CONF_NO_OUTPUT			(1 << 6)
#define SPI_QUP_CONF_OUTPUT_ENA			(0 << 6)
#define QUP_STATE_RESET_STATE			0x0
#define QUP_STATE_RUN_STATE			0x1
#define QUP_STATE_PAUSE_STATE			0x3
#define SPI_BIT_WORD_MSK			0x1F
#define SPI_8_BIT_WORD				0x07
#define PROTOCOL_CODE_MSK			(0x07 << 4)
#define PROTOCOL_CODE_SPI			(0x03 << 4)
#define LOOP_BACK_MSK				(1 << 8)
#define NO_LOOP_BACK				(0 << 8)
#define SLAVE_OPERATION_MSK			(1 << 5)
#define SLAVE_OPERATION				(0 << 5)
#define CLK_ALWAYS_ON				(0 << 9)
#define MX_CS_MODE				(0 << 8)
#define NO_TRI_STATE				(1 << 0)
#define OUTPUT_BIT_SHIFT_MSK			(1 << 16)
#define OUTPUT_BIT_SHIFT_EN			(1 << 16)
#define INPUT_BLOCK_MODE_MSK			(0x03 << 12)
#define INPUT_BLOCK_MODE			(0x01 << 12)
#define OUTPUT_BLOCK_MODE_MSK			(0x03 << 10)
#define OUTPUT_BLOCK_MODE			(0x01 << 10)
#define GSBI1_RESET				(1 << 0)
#define GSBI1_RESET_MSK				0x1

#define GSBI_M_VAL_SHFT				16
#define GSBIn_M_VAL_MSK				(0xFF << GSBI_M_VAL_SHFT)
#define GSBI_N_VAL_SHFT				16
#define GSBIn_N_VAL_MSK				(0xFF << GSBI_N_VAL_SHFT)
#define GSBI_D_VAL_SHFT				0
#define GSBIn_D_VAL_MSK				(0xFF << GSBI_D_VAL_SHFT)
#define MNCNTR_RST_MSK				(1 << 7)
#define MNCNTR_RST_ENA				(1 << 7)
#define MNCNTR_RST_DIS				(0 << 7)
#define MNCNTR_MSK				(1 << 8)
#define MNCNTR_EN				(1 << 8)
#define MNCNTR_DIS				(0 << 8)
#define MNCNTR_MODE_MSK				(0x3 << 5)
#define MNCNTR_MODE_BYPASS			(0 << 5)
#define MNCNTR_MODE_DUAL_EDGE			(0x2 << 5)
#define GSBI_PRE_DIV_SEL_SHFT			3
#define GSBIn_PRE_DIV_SEL_MSK			(0x3 << GSBI_PRE_DIV_SEL_SHFT)
#define GSBIn_PLL_SRC_MSK			(0x03 << 0)
#define GSBIn_PLL_SRC_PXO			(0 << 0)
#define GSBIn_PLL_SRC_PLL8			(0x3 << 0)

#define SPI_INPUT_FIRST_MODE			(1 << 9)
#define SPI_IO_CONTROL_CLOCK_IDLE_HIGH		(1 << 10)
#define QUP_DATA_AVAILABLE_FOR_READ		(1 << 5)
#define QUP_OUTPUT_FIFO_NOT_EMPTY		(1 << 4)
#define OUTPUT_SERVICE_FLAG			(1 << 8)
#define INPUT_SERVICE_FLAG			(1 << 9)
#define QUP_OUTPUT_FIFO_FULL			(1 << 6)
#define QUP_INPUT_FIFO_NOT_EMPTY		(1 << 5)
#define SPI_INPUT_BLOCK_SIZE			4
#define SPI_OUTPUT_BLOCK_SIZE			4
#define GSBI5_SPI_CLK				21
#define GSBI5_SPI_MISO				19
#define GSBI5_SPI_MOSI				18
#define GSBI5_SPI_CS_0				20
#define GSBI5_SPI_CS_1				61
#define GSBI5_SPI_CS_2				62
#define GSBI5_SPI_CS_3				2
#define GSBI6_SPI_CLK				30
#define GSBI6_SPI_CS_0				29
#define GSBI6_SPI_MISO				28
#define GSBI6_SPI_MOSI				27
#define GSBI7_SPI_CLK				9
#define GSBI7_SPI_CS_0				8
#define GSBI7_SPI_MISO				7
#define GSBI7_SPI_MOSI				6

#define MSM_GSBI_MAX_FREQ			51200000

#define SPI_RESET_STATE				0
#define SPI_RUN_STATE				1
#define SPI_PAUSE_STATE				3
#define SPI_CORE_RESET				0
#define SPI_CORE_RUNNING			1
#define GSBI_SPI_MODE_0				0
#define GSBI_SPI_MODE_1				1
#define GSBI_SPI_MODE_2				2
#define GSBI_SPI_MODE_3				3
#define GSBI5_SPI				0
#define GSBI6_SPI				1
#define GSBI7_SPI				2

struct gsbi_spi {
	unsigned int     spi_config;
	unsigned int     io_control;
	unsigned int     error_flags;
	unsigned int     error_flags_en;
	unsigned int     gsbi_ctrl;
	unsigned int     qup_config;
	unsigned int     qup_error_flags;
	unsigned int     qup_error_flags_en;
	unsigned int     qup_operational;
	unsigned int     qup_io_modes;
	unsigned int     qup_state;
	unsigned int     qup_input_fifo;
	unsigned int     qup_output_fifo;
	unsigned int     qup_mx_input_count;
	unsigned int     qup_mx_output_count;
	unsigned int     qup_sw_reset;
	unsigned int     qup_ns_reg;
	unsigned int     qup_md_reg;
};

struct ipq_spi_slave {
	struct spi_slave slave;
	const struct gsbi_spi *regs;
	unsigned int mode;
	unsigned int initialized;
	unsigned long freq;
	int allocated;
};

#endif /* _IPQ806X_SPI_H_ */
