/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <arch/io.h>
#include <reset.h>
#include <soc/northbridge.h>
#include <soc/pci_devs.h>
#include <device/pci_ops.h>
#include <soc/southbridge.h>
#include <amdblocks/acpimmio.h>
#include <amdblocks/reset.h>

void set_warm_reset_flag(void)
{
	uint8_t ncp = inw(NCP_ERR);

	outb(NCP_ERR, ncp | NCP_WARM_BOOT);
}

int is_warm_reset(void)
{
	return !!(inb(NCP_ERR) & NCP_WARM_BOOT);
}

void do_cold_reset(void)
{
	/* De-assert and then assert all PwrGood signals on CF9 reset. */
	pm_write16(PWR_RESET_CFG, pm_read16(PWR_RESET_CFG) |
		TOGGLE_ALL_PWR_GOOD);
	outb(RST_CMD | SYS_RST, SYS_RESET);
}

void do_warm_reset(void)
{
	set_warm_reset_flag();

	/* Assert reset signals only. */
	outb(RST_CMD | SYS_RST, SYS_RESET);
}

void do_board_reset(void)
{
	/* TODO: Would a warm_reset() suffice? */
	do_cold_reset();
}
