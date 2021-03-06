#include QMK_KEYBOARD_H

void matrix_init_user(void) {
    set_unicode_input_mode(UC_WIN); 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_grid(
							 KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
							 LCTL_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, 
							 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), 
							 KC_LCTL, MO(1), KC_LGUI, KC_LALT, MO(2), KC_SPC, KC_SPC, MO(3), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
	),
	[1] = LAYOUT_planck_grid(
							 KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
							 KC_NO, KC_NO, KC_NO, LALT(KC_F7), LSFT(KC_F6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
	[2] = LAYOUT_planck_grid(
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_DEL, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,KC_NO, MO(4), KC_HOME, KC_PGUP, KC_PGDN, KC_END
	),
	[3] = LAYOUT_planck_grid(
							 KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, 
							 KC_NO, KC_NO, KC_PIPE, KC_AMPR, KC_EQL, KC_PLUS, KC_MINS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, MO(4), KC_SPC, KC_SPC, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
	),
	[4] = LAYOUT_planck_grid(
							 KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0xFC), KC_NO, UC(0xF6), KC_NO, KC_NO, 
							 KC_NO, UC(0xE4), UC(0xDF), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 MO(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_MUTE, KC_TRNS, KC_MSTP, KC_MSTP, KC_TRNS, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD
	),
	[5] = LAYOUT_planck_grid(
							 KC_SLEP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0xDC), KC_NO, UC(0xD6), KC_NO, KC_NO, 
							 KC_NO, UC(0xC4), UC(0xDF), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	)
};