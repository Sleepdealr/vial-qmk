// Copyright 2023 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later


#pragma once

/* key matrix size, only 1x4 are used in current state.
   IO expander setup would allow up to 1x16 + 1 from the MCU */
#define MATRIX_ROWS 1
#define MATRIX_COLS 17

#define I2C1_SDA_PIN B0
#define I2C1_SCL_PIN B1



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
