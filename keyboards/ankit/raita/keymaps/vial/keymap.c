#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ D │ E │ E │ E │
     * ├───┼───┼───┼───┤
     * │ N │ U │ T │ S │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_4x2(
        KC_D,   KC_E,   KC_E,   KC_Z,
        KC_N,   KC_U,   KC_T,   KC_S
    ),
    [1] = LAYOUT_4x2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_4x2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_4x2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
