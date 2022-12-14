/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016 Stefan Roese <sr@denx.de>
 */

/*
 * board/config.h - configuration options, board specific
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <configs/x86-common.h>

#ifndef CONFIG_INTERNAL_UART
/* Use BayTrail internal HS UART which is memory-mapped */
#undef  CONFIG_SYS_NS16550_PORT_MAPPED
#endif

#define CONFIG_STD_DEVICES_SETTINGS     "stdin=serial\0" \
					"stdout=serial\0" \
					"stderr=serial\0"

#define VIDEO_IO_OFFSET				0
#define CONFIG_X86EMU_RAW_IO

#undef CONFIG_EXTRA_ENV_SETTINGS
#define CONFIG_EXTRA_ENV_SETTINGS				\
	"kernel-ver=4.4.0-24\0"					\
	"boot=zboot 03000000 0 04000000 ${filesize}\0"		\
	"upd_uboot=usb reset;tftp 100000 dfi/u-boot.rom;"	\
		"sf probe;sf update 100000 0 800000;saveenv\0"

#endif	/* __CONFIG_H */
