// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/* Encoder Definitions */
#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP1 }
#define ENCODER_RESOLUTION 4

#define I2C1_SDA_PIN GP27
#define I2C1_SCL_PIN GP26
#define I2C_DRIVER I2CD1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
