/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <cpu/x86/mtrr.h>
#include <cpu/x86/cache.h>
#include <cpu/x86/post_code.h>

#define NoEvictMod_MSR 0x2e0

.code32
.global chipset_teardown_car

chipset_teardown_car:
	pop %esp

	post_code(0x30)

	/* Disable cache. */
	movl	%cr0, %eax
	orl	$CR0_CacheDisable, %eax
	movl	%eax, %cr0

	post_code(0x31)

	/* Disable MTRR. */
	movl	$MTRR_DEF_TYPE_MSR, %ecx
	rdmsr
	andl	$(~MTRR_DEF_TYPE_EN), %eax
	wrmsr

	/* Disable the no eviction run state */
	movl	$NoEvictMod_MSR, %ecx
	rdmsr
	andl	$~2, %eax
	wrmsr
	andl	$~1, %eax
	wrmsr

	post_code(0x32)

	/* Return to caller. */
	jmp	*%esp
