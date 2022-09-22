#include QMK_KEYBOARD_H

enum custom_keycodes {
    WINCRASH = SAFE_RANGE,
};

void wincrash(void){
    SEND_STRING(SS_LGUI("r"));
    SEND_STRING("powershell ");
    // SENDSTRING("powershell while(1){ii **}");
    wait_ms(250);
    tap_code(KC_ENT);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case WINCRASH:
        if (record->event.pressed) {
            wincrash();
        } else {
            // when keycode is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_1x1(
        KC_A
    )
};
