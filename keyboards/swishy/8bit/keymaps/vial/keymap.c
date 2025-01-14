#include QMK_KEYBOARD_H

#ifdef AUDIO_ENABLE

    #define ZELDA_SONG  \
    Q__NOTE(_G5),     \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_G5),     \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_GS5),     \
    Q__NOTE(_AS5),     \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),  \
    Q__NOTE(_GS5),     \
    Q__NOTE(_AS5),     \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6), \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),  \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),  \
    Q__NOTE(_AS5),    \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),    \
    Q__NOTE(_E6),  \
    Q__NOTE(_AS5),    \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),    \
    Q__NOTE(_E6),  \
    Q__NOTE(_B5),    \
    Q__NOTE(_CS6),     \
    Q__NOTE(_DS6),    \
    Q__NOTE(_F6),  \
    Q__NOTE(_C6),    \
    Q__NOTE(_D6),     \
    Q__NOTE(_E6),    \
    Q__NOTE(_FS6),  \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),     \
    Q__NOTE(_F6),    \
    Q__NOTE(_G6),  \
    Q__NOTE(_D6),     \
    Q__NOTE(_E6),    \
    Q__NOTE(_FS6),  \
    Q__NOTE(_GS6),  \
    S__NOTE(_REST),   \
    Q__NOTE(_A6),  \
    Q__NOTE(_AS6),     \
    Q__NOTE(_B6),    \
    H__NOTE(_C7)

    // #define STARTUP_SONG SONG(ZELDA_SONG)

    float my_song[][2] = SONG(ZELDA_SONG);

    enum my_keycodes {
        AUDIO1 = SAFE_RANGE
    };

    bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        switch (keycode) {
            case AUDIO1:
                if (record->event.pressed) {
                    PLAY_SONG(my_song);
                }
                return false;
            default:
                return true;
        }
    }

    void keyboard_post_init_kb(void) {
        wait_ms(250);
        PLAY_SONG(my_song);
    }



#endif




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    [0] = LAYOUT_60_all(
        AUDIO1,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE,KC_A,    KC_SPC,  KC_SPACE,                           KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    [1] = LAYOUT_60_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_60_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
