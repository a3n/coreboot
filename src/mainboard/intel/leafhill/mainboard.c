/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <device/device.h>

static void mainboard_init(void *chip_info)
{
	/* Nothing Here Yet */
}

struct chip_operations mainboard_ops = {
	.init = mainboard_init,
};
