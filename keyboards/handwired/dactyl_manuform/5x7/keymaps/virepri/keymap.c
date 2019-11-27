#include QMK_KEYBOARD_H

enum layers {
    PRIMARY, // QWERTY mapped for dvorak soft-mappings
    FUNCPAGE, // F-keys, arrows, qwerty equivalents of dvorak []
    RESETPAD, // Reset key, numpad
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[PRIMARY] = LAYOUT_5x7(
        // left half
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_ESC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_HOME,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_END,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
        KC_LGUI, KC_GRV, KC_LCTL, KC_LALT,
                                    KC_LCTL, LT(FUNCPAGE,KC_SPC),
                                    KC_VOLU, KC_LEAD,
                                    KC_MUTE, KC_VOLD,

        // right half
        KC_ESC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PSCR,
        KC_PGUP, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC,
        KC_PGDN, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
            KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                        KC_LEFT, KC_UP, KC_DOWN, KC_RGHT,
        KC_ENT, KC_BSPC,
        TG(RESETPAD), KC_MNXT,
        KC_MPRV, KC_MPLY),
	[FUNCPAGE] = LAYOUT_5x7(
        // left half
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_RBRC,
        KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,

        // right half
        KC_F11, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS,
        KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,
        KC_INS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_MINS, KC_EQL,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS),
	[RESETPAD] = LAYOUT_5x7(
        // left half
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                    KC_TRNS, KC_TRNS,
                                                    KC_TRNS, KC_TRNS,
                                                    KC_TRNS, KC_TRNS,

        // right half
        KC_TRNS, KC_TRNS, KC_NLCK, KC_TRNS, KC_PMNS, KC_PPLS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PAST, KC_TRNS,
                 KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_TRNS,
                                 KC_P0, KC_PDOT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS)
};
