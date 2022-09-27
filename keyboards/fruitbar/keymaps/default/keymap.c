#include QMK_KEYBOARD_H

// #ifdef OLED_DRIVER_ENABLE
// void oled_task_user(void) {
//   oled_write_P(PSTR("Layer: "), false);

//   switch (get_highest_layer(layer_state)) {
//     case 0:
//       oled_write_P(PSTR("Default\n"), false);
//       break;
//     case 1:
//       oled_write_P(PSTR("Function\n"), false);
//       break;
//     default:
//       oled_write_P(PSTR("huh\n"), false);
//   }
// }
// #endif


// bool encoder_update_kb(uint8_t index, bool clockwise) {
//     if (!encoder_update_kb(index, clockwise)) { return false; }
// 	if(index == 0) {
// 		if (clockwise) {
// 			tap_code(KC_VOLD);
// 		} else {
// 			tap_code(KC_VOLU);
// 			}
// 		}
// 	return true;
// }


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
           KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,       KC_HOME, KC_END,
           KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
           KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,                    KC_UP,
           KC_LCTRL, KC_LGUI, KC_LALT,    KC_SPC, KC_SPC, KC_SPC,         KC_RALT, MO(_FN), KC_RCTRL,        KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  [1] = LAYOUT_all(
           KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_DEL,         KC_PGDN, KC_PGUP,
           KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
       RESET, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,
  )
};
