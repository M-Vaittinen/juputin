/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2018 Allied Telesis Labs
 */

#ifndef _CONFIG_X530_H
#define _CONFIG_X530_H

/*
 * High Level Configuration Options (easy to change)
 */

/*
 * NS16550 Configuration
 */
#define CONFIG_SYS_NS16550_SERIAL
#define CONFIG_SYS_NS16550_CLK		CONFIG_SYS_TCLK
#if !defined(CONFIG_DM_SERIAL)
#define CONFIG_SYS_NS16550_REG_SIZE	(-4)
#define CONFIG_SYS_NS16550_COM1		MV_UART_CONSOLE_BASE
#endif

/*
 * Serial Port configuration
 * The following definitions let you select what serial you want to use
 * for your console driver.
 */

/* NAND */

#define BBT_CUSTOM_SCAN
#define BBT_CUSTOM_SCAN_PAGE 0
#define BBT_CUSTOM_SCAN_POSITION 2048

/* SPI NOR flash default params, used by sf commands */

#define MTDIDS_DEFAULT			"nand0=nand"
#define MTDPARTS_DEFAULT		"mtdparts=nand:240M(user),8M(errlog),8M(nand-bbt)"
#define MTDPARTS_MTDOOPS		"errlog"

/* Partition support */

/* Additional FS support/configuration */

/* Environment in SPI NOR flash */

#define PHY_ANEG_TIMEOUT	8000	/* PHY needs a longer aneg time */

/* NAND */

#include <asm/arch/config.h>

/* Keep device tree and initrd in low memory so the kernel can access them */
#define CONFIG_EXTRA_ENV_SETTINGS	\
	"fdt_high=0x10000000\0"		\
	"initrd_high=0x10000000\0"

#define CONFIG_UBI_PART			user
#define CONFIG_UBIFS_VOLUME		user

#endif /* _CONFIG_X530_H */
