// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [2] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [3] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_2x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F
    ),
    [1] = LAYOUT_ortho_2x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F
    ),
    [2] = LAYOUT_ortho_2x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F
    ),
    [3] = LAYOUT_ortho_2x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F
    ),
};
