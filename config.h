// Copyright 2023 brianvoo (@brianvoo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

/* Select hand configuration */
// #define MASTER_LEFT
#define MASTER_RIGHT z
// #define EE_HANDS

#define USE_I2C
//#define SOFT_SERIAL_PIN D0
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
#define FLIP_HALF
#define TAPPING_TERM 180
#define SPLIT_USB_DETECT
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0
#define RGBLED_NUM 28
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 14, 14 }
#define WS2812_DI_PIN F5
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_TWINKLE
#define RGBLIGHT_DEFAULT_HUE 127