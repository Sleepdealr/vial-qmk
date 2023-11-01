#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_CAPS, KC_SCRL, KC_NUM,
        KC_D,    KC_E
    )
};
