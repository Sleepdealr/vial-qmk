
#include "quantum.h"

layer_state_t layer_state_set_user(layer_state_t state) {
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
