#include "e22.h"

#define _NUMPAD 0
#define _FUNC 1
#define _SPECIAL 2
#define _MACRO 3

enum custom_keycodes {
	DOUBLE_ZERO = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if(record->event.pressed) {
		switch(keycode) {
			case DOUBLE_ZERO:
				SEND_STRING("00");
				return false; break;
		}
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Layer 3 (top layer): Number Pad
	 * ,-----------------------.
	 * | NPL | FNL | SPL | MAC |
	 * |-----------------------|
	 * | NL  |  /  |  *  |  -  |
	 * |-----------------------|
	 * |  7  |  8  |  9  |     |
	 * |-----------------|  +  |
	 * |  4  |  5  |  6  |     |
	 * |-----------------------|
	 * |  1  |  2  |  3  |     |
	 * |-----------------| ENT |
	 * |  0  | 00  |  .  |     |
	 * `-----------------------'
	 */
	[_NUMPAD] = KEYMAP(                                              \
		TO(_NUMPAD), TO(_SPECIAL), TO(_FUNC)     , TO(_MACRO),   \
		KC_NUMLOCK , KC_KP_SLASH , KC_KP_ASTERISK, KC_KP_MINUS,  \
		KC_KP_7    , KC_KP_8     , KC_KP_9       ,               \
		KC_KP_4    , KC_KP_5     , KC_KP_6       , KC_KP_PLUS,   \
		KC_KP_1    , KC_KP_2     , KC_KP_3       ,               \
		KC_KP_0    , DOUBLE_ZERO , KC_KP_DOT     , KC_KP_ENTER),

	/* Layer 2: Function Layer
	 * ,-----------------------.
	 * | NPL | FNL | SPL | MAC |
	 * |-----------------------|
	 * | NL  |  /  |  *  |  -  |
	 * |-----------------------|
	 * | F1  | F2  | F3  |     |
	 * |-----------------|  +  |
	 * | F4  | F5  | F6  |     |
	 * |-----------------------|
	 * | F7  | F8  | F9  |     |
	 * |-----------------| ENT |
	 * | F10 | F11 | F12 |     |
	 * `-----------------------'
	 */
	/*
	[_FUNC] = KEYMAP(
		TO(_NUMPAD), TO(_SPECIAL), TO(_FUNC)     , TO(_MACRO),  \
		KC_NUMLOCK , KC_KP_SLASH , KC_KP_ASTERISK, KC_KP_MINUS, \
		KC_F1      , KC_F2       , KC_F3         ,              \
		KC_F4      , KC_F5       , KC_F6         , KC_KP_PLUS,  \
		KC_F7      , KC_F8       , KC_F9         ,		\
		KC_F10     , KC_F11      , KC_F12        , KC_KP_ENTER	\
	),
	*/

	/* Layer 1: Special Layer
	 * ,-----------------------.
	 * | NPL | FNL | SPL | MAC |
	 * |-----------------------|
	 * | PRS | PAU | SCL |  -  |
	 * |-----------------------|
	 * | INS | HOM | PGU |     |
	 * |-----------------|  +  |
	 * | DEL | END | PGD |     |
	 * |-----------------------|
	 * | NON | UPA | NON |     |
	 * |-----------------| ENT |
	 * | LEA | DNA | RIA |     |
	 * `-----------------------'
	 */
	/*
	[_SPECIAL] = KEYMAP(
		TO(_NUMPAD), TO(_SPECIAL), TO(_FUNC)     , TO(_MACRO),  \
		KC_PSCREEN , KC_PAUS     , KC_SCROLLLOCK , KC_KP_MINUS, \
		KC_INS     , KC_HOME     , KC_PGUP       ,		\
		KC_DELETE  , KC_END      , KC_PGDOWN     , KC_KP_PLUS,	\
		KC_NO      , KC_UP       , KC_NO         ,		\
		KC_LEFT    , KC_DOWN     , KC_RIGHT      , KC_KP_ENTER	\
	),
	*/


	/* Layer 0: Macro
	 * ,-----------------------.
	 * | NPL | FNL | SPL | MAC |
	 * |-----------------------|
	 * | M1  | M2  | M3  | M4  |
	 * |-----------------------|
	 * | M5  | M6  | M7  |     |
	 * |-----------------| M11 |
	 * | M8  | M9  | M10 |     |
	 * |-----------------------|
	 * | M12 | M13 | M14 |     |
	 * |-----------------| M19 |
	 * | M15 | M16 | M18 |     |
	 * `-----------------------'
	 */
	/*
	[_MACRO] = KEYMAP(
		TO(_NUMPAD), TO(_SPECIAL), TO(_FUNC)     , TO(_MACRO),  \
		KC_VOLD    , KC_MUTE     , KC_VOLU       , KC_KP_MINUS, \
		KC_MPRV    , KC_MPLY     , KC_MNXT       ,		\
		KC_CALC    , KC_MAIL     , KC_MYCM       , KC_KP_PLUS,  \
		KC_NO      , KC_UP       , KC_NO         ,		\
		KC_LEFT    , KC_DOWN     , KC_RIGHT      , KC_KP_ENTER	\
	)
	*/
};

