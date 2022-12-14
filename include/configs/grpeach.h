/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration settings for the Renesas GRPEACH board
 *
 * Copyright (C) 2017-2019 Renesas Electronics
 */

#ifndef __GRPEACH_H
#define __GRPEACH_H

/* Board Clock , P1 clock frequency (XTAL=13.33MHz) */

/* Miscellaneous */

/* Internal RAM Size (RZ/A1=3M, RZ/A1M=5M, RZ/A1H=10M) */
#define CONFIG_SYS_SDRAM_BASE		0x20000000
#define CONFIG_SYS_SDRAM_SIZE		(10 * 1024 * 1024)

/* Network interface */
#define CONFIG_SH_ETHER_USE_PORT	0
#define CONFIG_SH_ETHER_PHY_ADDR	0
#define CONFIG_SH_ETHER_PHY_MODE PHY_INTERFACE_MODE_MII
#define CONFIG_SH_ETHER_CACHE_WRITEBACK
#define CONFIG_SH_ETHER_CACHE_INVALIDATE
#define CONFIG_SH_ETHER_ALIGNE_SIZE	64

#endif	/* __GRPEACH_H */
