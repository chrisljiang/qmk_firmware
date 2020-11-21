#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  VRSN = SAFE_RANGE,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Qwerty
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | Left |           | Right|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Esc    |   Q  |   W  |   E  |   R  |   T  |  NO  |           |  L3  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Tab    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|   [  |           |   ]  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LCtrl| LAlt | LGui | Left | Right|                                       |  Up  | Down |   `  | RAlt | RCtrl|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | Caps |       | Ins  | Esc  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Home |       | PgUp |      |      |
 *                                 | Space| BkSp |------|       |------| Del  | Enter|
 *                                 |      |      | End  |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */
// QWERTY
[0] = LAYOUT_ergodox(
    // left hand
    KC_EQL,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_LEFT,
    KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_NO,
    KC_TAB,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,
    KC_LCTL,    KC_LALT,    KC_LGUI,    KC_LEFT,    KC_RGHT,
                                                                KC_APP,     KC_CLCK,
                                                                            KC_HOME,
                                                    KC_SPC,     KC_BSPC,    KC_END,
    // right hand
    KC_RGHT,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
    TG(3),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
                KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
    KC_RBRC,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                            KC_UP,      KC_DOWN,    KC_GRV,     KC_RALT,    KC_RCTL,
    KC_INS,     KC_ESC,
    KC_PGUP,
    KC_PGDN,    KC_DEL,     KC_ENT
),
/* Keymap 1: Colemak
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | Left |           | Right|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Esc    |   Q  |   W  |   F  |   P  |   G  |  NO  |           |  L3  |   J  |   L  |   U  |   Y  |   ;  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Tab    |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
 * |--------+------+------+------+------+------|   [  |           |   ]  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LCtrl| LAlt | LGui | Left | Right|                                       |  Up  | Down |   `  | RAlt | RCtrl|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | Caps |       | Ins  | Esc  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Home |       | PgUp |      |      |
 *                                 | Space| BkSp |------|       |------| Del  | Enter|
 *                                 |      |      | End  |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */
// COLEMAK
[1] = LAYOUT_ergodox(
    // left hand
    KC_EQL,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_LEFT,
    KC_ESC,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_NO,
    KC_TAB,     KC_A,       KC_R,       KC_S,       KC_T,       KC_D,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,
    KC_LCTL,    KC_LALT,    KC_LGUI,    KC_LEFT,    KC_RGHT,
                                                                KC_APP,     KC_CLCK,
                                                                            KC_HOME,
                                                    KC_SPC,     KC_BSPC,    KC_END,
    // right hand
    KC_RGHT,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
    TG(3),      KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_BSLS,
                KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,
    KC_RBRC,    KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                            KC_UP,      KC_DOWN,    KC_GRV,     KC_RALT,    KC_RCTL,
    KC_INS,     KC_ESC,
    KC_PGUP,
    KC_PGDN,    KC_DEL,     KC_ENT
),
/* Keymap 2: Dvorak
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |  L3  |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// DVORAK
[2] = LAYOUT_ergodox(
    // left hand
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                KC_NO,      KC_NO,
                                                                            KC_NO,
                                                    KC_NO,      KC_NO,      KC_NO,
    // right hand
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    TG(3),      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,
    KC_NO,
    KC_NO,      KC_NO,      KC_NO
),
/* Keymap 3: Layer Control
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  F12   |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |  F11   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        | WhUp |WhLeft| MsUp |WhRght|      |  L3  |           |  L4  |  L0  |  L1  |  L2  |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |WhDown|MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      | Reset  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      | EEP_RST|
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       | VolUp| VolDn| Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// LAYER CONTROL
[3] = LAYOUT_ergodox(
    // left hand
    KC_F12,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_NO,
    KC_NO,      KC_WH_U,    KC_WH_L,    KC_MS_U,    KC_WH_R,    KC_NO,      TG(3),
    KC_NO,      KC_WH_D,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_BTN1,    KC_BTN2,
                                                                KC_NO,      KC_NO,
                                                                            KC_NO,
                                                    KC_NO,      KC_NO,      KC_NO,
    // right hand
    KC_NO,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
    TG(4),      DF(0),      DF(1),      DF(2),      KC_NO,      KC_NO,      KC_NO,
                KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      RESET,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      EEP_RST,
                            KC_VOLU,    KC_VOLD,    KC_MUTE,    KC_NO,      KC_NO,
    KC_NO,      KC_NO,
    KC_NO,
    KC_NO,      KC_NO,      KC_NO
),
/* Keymap 4: Numpad
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |      |      |      |      |      |      |           |      |Scroll| Num  |   /  |   *  |   -  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |      |      |  Up  |      |      |  L4  |           |      |      |   7  |   8  |   9  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Enter  |      | Left | Down | Right|      |------|           |------|      |   4  |   5  |   6  |   =  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  | Enter|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |   0  |   0  |   .  | Enter|      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 | Space| BkSp |------|       |------| Del  | Enter|
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// NUMPAD
[4] = LAYOUT_ergodox(
    // left hand
    KC_ESC,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_TAB,     KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      TG(4),
    KC_ENT,     KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,
    KC_LSFT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                KC_NO,      KC_NO,
                                                                            KC_NO,
                                                    KC_SPC,     KC_BSPC,    KC_NO,
    // right hand
    KC_NO,      KC_SLCK,    KC_NLCK,    KC_PSLS,    KC_PAST,    KC_PMNS,    KC_NO,
    KC_NO,      KC_NO,      KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_PPLS,    KC_NO,
                KC_NO,      KC_KP_4,    KC_KP_5,    KC_KP_6,    KC_PEQL,    KC_NO,
    KC_NO,      KC_NO,      KC_KP_1,    KC_KP_2,    KC_KP_3,    KC_PENT,    KC_NO,
                            KC_KP_0,    KC_KP_0,    KC_PDOT,    KC_PENT,    KC_NO,
    KC_NO,      KC_NO,
    KC_NO,
    KC_NO,      KC_DEL,     KC_ENT
),
/* Keymap x: Blank
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// BLANK
/*[x] = LAYOUT_ergodox(
    // left hand
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,
                                                    KC_TRNS,    KC_TRNS,    KC_TRNS,
    // right hand
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,
    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS
),*/
/* Keymap x: None
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// NONE
/*[x] = LAYOUT_ergodox(
    // left hand
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                KC_NO,      KC_NO,
                                                                            KC_NO,
                                                    KC_NO,      KC_NO,      KC_NO,
    // right hand
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,
    KC_NO,
    KC_NO,      KC_NO,      KC_NO
),*/
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }
};
