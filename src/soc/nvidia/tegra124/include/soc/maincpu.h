/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#ifndef __SOC_NVIDIA_TEGRA124_MAINCPU_H__
#define __SOC_NVIDIA_TEGRA124_MAINCPU_H__

#include <stdint.h>

extern u32 maincpu_stack_pointer;
extern u32 maincpu_entry_point;
void maincpu_setup(void);

#endif	/* __SOC_NVIDIA_TEGRA124_MAINCPU_H__ */
