#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bak | `  | 
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    |
* |-----------------------------------------------------------------------------------------+
* | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | / | Home  | Up  |End  |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  Fn3 |  Alt |     GUI     | SPACE  |    Fn1    | Fn2 | Alt | Left |Rght |Down |
* `-----------------------------------------------------------------------------------------'
*/

	LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,  KC_5,    KC_6,    KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSPC,   KC_GRV,
		KC_TAB,           KC_Q,    KC_W,   KC_E,  KC_R,    KC_T,    KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,
		KC_LCTL,          KC_A,    KC_S,   KC_D,  KC_F,    KC_G,    KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,
		KC_LSFT, KC_TRNS, KC_Z,    KC_X,   KC_C,  KC_V,    KC_B,    KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_HOME,  KC_UP,   KC_END,
		KC_CAPS, MO(3), KC_LALT, KC_LGUI, KC_SPC, MO(1), MO(2), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),



 /* Layer 1
* ,-----------------------------------------------------------------------------------------.
* | PWR | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |     | Del |
* |-----------------------------------------------------------------------------------------+
* |       |RGBT |RGBM |Hue+ |Hue- |Sat+ |Sat- |Val+ |Val- |     |     |     |     |  RESET  |
* |-----------------------------------------------------------------------------------------+
* |         |     |     |     |     |     |     |     |     |     |     |     |             |
* |-----------------------------------------------------------------------------------------+
* |           |     |     |     | BLT | BL- | BL+ | BLS |     |     |           |Vol+ |     |
* |-----------------------------------------------------------------------------------------+
* |      |      |      |                |      |    Stop     |      |     |Prev |Vol- |Next |
* `-----------------------------------------------------------------------------------------'
*/


  LAYOUT_all(
		KC_TRNS,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,  KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS,  KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_PGDOWN, KC_HOME, KC_END, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};