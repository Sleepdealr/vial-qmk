// Copyright 2023 Sleepdealer (@Sleepdealer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SOLENOID_PIN D6

#define AUDIO_PIN A8
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

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
