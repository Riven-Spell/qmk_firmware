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

        // Maps to C on dvorak
        // Comments code out
        SEQ_ONE_KEY(KC_I) {
            SEND_STRING(SS_LCTL("/"));
        }

        // Maps to R on dvorak
        // IntelliJ rename shortcut
        SEQ_ONE_KEY(KC_O) {
            register_code(KC_LSHIFT);
            register_code(KC_F6);
            unregister_code(KC_LSHIFT);
            unregister_code(KC_F6);
        }

        // Maps to P on dvorak
        // Intellij refactor function signature shortcut
        SEQ_ONE_KEY(KC_R) {
            register_code(KC_LCTL);
            register_code(KC_F6);
            unregister_code(KC_LCTL);
            unregister_code(KC_F6);
        }

        // Reset shortcut to avoid buing unable to easily reset the board with only one half attached
        SEQ_ONE_KEY(KC_LGUI) {
            reset_keyboard();
        }
    }
}
#endif
