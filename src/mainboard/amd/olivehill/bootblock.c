/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <amdblocks/acpimmio.h>
#include <bootblock_common.h>
#include <device/pnp_ops.h>

void bootblock_mainboard_early_init(void)
{
	int i;
	u32 val;

	/* Disable PCI-PCI bridge and release GPIO32/33 for other uses. */
	pm_write8(0xea, 0x1);

	/* On Larne, after LpcClkDrvSth is set, it needs some time to be stable, because of the buffer ICS551M */
	for (i = 0; i < 200000; i++)
		val = inb(0xcd6);
}
