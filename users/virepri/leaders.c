#include QMK_KEYBOARD_H
#include <sendstring_dvorak.h>

// bool space_held = false;
// bool key_hit = false;

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch(keycode) {
//     case COMMENTOUT:
//         if(record->event.pressed) {
//             SEND_STRING(SS_LCTL("/"));
//         }
//     }

//     return true;
// }

#ifdef USER_LEADERS
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        SEQ_ONE_KEY(KC_I) {
            SEND_STRING(SS_LCTL("/"));
        }

        SEQ_ONE_KEY(KC_O) {
            register_code(KC_LSHIFT);
            register_code(KC_F6);
            unregister_code(KC_LSHIFT);
            unregister_code(KC_F6);
        }

        SEQ_ONE_KEY(KC_R) {
            register_code(KC_LCTL);
            register_code(KC_F6);
            unregister_code(KC_LCTL);
            unregister_code(KC_F6);
        }

        SEQ_ONE_KEY(KC_LGUI) {
            reset_keyboard();
        }
    }
}
#endif
