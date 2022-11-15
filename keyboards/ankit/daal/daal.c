// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

void keyboard_pre_init_kb(void) {
    setPinOutput(GP28); // Set LED pin as output
}

layer_state_t layer_state_set_kb(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 1:
            writePin(GP28, 1);
            break;
        default:
            writePin(GP28 , 0);
            break;
    }
  return state;
}
