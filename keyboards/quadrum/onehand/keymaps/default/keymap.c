#include QMK_KEYBOARD_H

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F0, 900, 575, 285),
    [1] = JOYSTICK_AXIS_IN(F1, 900, 575, 285)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        KC_Q,    KC_1,    KC_2,    KC_3,    KC_Y,  KC_U,  KC_P,
        KC_G,    KC_W,    KC_E,    KC_R,    KC_T,  KC_I,  KC_O,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_H,  KC_K,  KC_L,
        KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_J,
        KC_Z,    KC_X,    KC_COMM, KC_DOT,
        MO(2),   KC_BSPC, KC_SPACE,
        MO(1),   KC_LSFT
    ),
    [1] = LAYOUT_all(
        KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_H,    KC_SCLN, KC_QUOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SLSH,
        MO(2),   KC_BSPC, KC_ENT,
        MO(1),   KC_LSFT
    ),
    [2] = LAYOUT_all(
        KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F1,   KC_F2,   KC_F3,   KC_PSCR, KC_SCRL, KC_PAUS, KC_TRNS,
        KC_F4,   KC_F5,   KC_F6,   KC_INS,  KC_HOME, KC_PGUP, KC_TRNS,
        KC_F7,   KC_F8,   KC_F9,   KC_DEL,  KC_END,  KC_PGDN,
        KC_F10,  KC_F11,  KC_F11,  KC_F13,
        MO(2),   KC_LSFT, KC_TAB,
        MO(1),   KC_LSFT
    ),
};
