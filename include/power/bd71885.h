/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (C) 2022 ROHM Semiconductors */

#ifndef BD71885_H_
#define BD71885_H_

#include <linux/bitops.h>

/* Soc specific way of defining GPIO pin connected to the PMIC SUSPEND pin */
#define SUSPEND_GPIO_PIN	0x0
/* Soc specific way of setting GPIO pin HIGH... */
#define GPIO_HIGH		0x1
/*... or LOW */
#define GPIO_LOW		0x0

/*
 * The BD71885 has an OTP option to enable the HIGH voltage range for LDO1 and
 * LDO3. If this OTP variant is used, please enable the below definitions
 * accordingly
 * #define OTP_LDO1_HIRANGE
 * #define OTP_LDO3_HIRANGE
 */

#define BD71885_BUCK_DRIVER "bd71885_buck"
#define BD71885_LDO_DRIVER "bd71885_ldo"
#define BD71885_PROD_ID_VAL 0x01
#define BD71885_VENDOR_VAL 0x10

#define BD71885_MASK_RUN_ON BIT(2)
#define BD71885_MASK_SUSP_ON BIT(1)
#define BD71885_MASK_IDLE_ON BIT(0)

#define BD71885_BUCK5_LORANGE BIT(7)

#define BD71885_BOOTSRC_MASK (BIT(0) | BIT(1) | BIT(2) | BIT(6) | BIT(7))
#define BD71885_VR_FAULT BIT(6)

enum {
	BD71885_STATE_SHDN,
	BD71885_STATE_EMERG,
	BD71885_STATE_DEAD,
	BD71885_STATE_OTP,
	BD71885_STATE_HBNT,
	BD71885_STATE_RUN,
	BD71885_STATE_IDLE,
	BD71885_STATE_SUSPEND,
};
#define BD71885_STATE_MASK 0x07

/* PS_CTRL masks */
#define BD71885_HIBERNATE_MASK		BIT(0)
#define BD71885_IDLE_MASK		BIT(1)
enum {
	BD71885_PROD_ID			= 0x00,
	BD71885_VENDOR			= 0x01,
	BD71885_BOOTSRC			= 0x05,
	BD71885_RESETSRC1		= 0x06,
	BD71885_RESETSRC2		= 0x07,
	BD71885_RESETSRC3		= 0x08,
	BD71885_POWER_STATE		= 0x09,
	BD71885_REG_PS_CTRL_1		= 0x0b,
	BD71885_BUCK1_ON		= 0x11,
	BD71885_BUCK2_ON		= 0x17,
	BD71885_BUCK3_ON		= 0x1d,
	BD71885_BUCK4_ON		= 0x23,
	BD71885_BUCK5_ON		= 0x29,
	BD71885_BUCK5_MODE		= 0x2a,
	BD71885_BUCK6_ON		= 0x2f,
	BD71885_BUCK7_ON		= 0x35,
	BD71885_BUCK8_ON		= 0x3b,
	BD71885_LDO1_ON			= 0x41,
	BD71885_LDO2_ON			= 0x44,
	BD71885_LDO3_ON			= 0x47,
	BD71885_LDO4_ON			= 0x4a,
	BD71885_REG_PBTNCONFIG		= 0x8b,
	BD71885_MAX_REGISTER		= 0xa8,
};


#endif