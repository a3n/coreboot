/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <cbmem.h>
#include <symbols.h>
#include <ramdetect.h>

void *cbmem_top_chipset(void)
{
	return _dram + (probe_ramsize((uintptr_t)_dram, CONFIG_DRAM_SIZE_MB) * MiB);
}
