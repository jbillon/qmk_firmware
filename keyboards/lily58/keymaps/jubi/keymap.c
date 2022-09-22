#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  BEGLINE = SAFE_RANGE,
  ENDLINE,
  EAIGUE,
  EGRAVE,
  AGRAVE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| BackSP|    | ENTER |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | ENTER| LAlt | LGUI | /Space  /       \RAISE \  | RSFT |LOWER | RGUI |
 *                   |      |      |      |/ Raise /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_GRV,      KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                    KC_6,    KC_7,       KC_8,     KC_9,    KC_0,     KC_MINS,
  KC_TAB,      KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,    KC_U,       KC_I,     KC_O,    KC_P,     KC_EQL,
  KC_LSFT,     KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,    KC_J,       KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
  KC_LCTRL,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_BSPC,                  KC_ENT, KC_N,    KC_M,       KC_COMM,  KC_DOT,  KC_SLSH,  KC_BSLS,
                              KC_ENT, KC_LALT, KC_LGUI,  LT(_RAISE, KC_SPC),   TT(_RAISE), KC_RSFT, TT(_LOWER), KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | Vdwn | Mute |  Vup |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      | Rwnd | Play | FstF |      |-------|    |-------|      |      |      |DT_PRT|DT_DWN| DT_UP|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */ 
[_LOWER] = LAYOUT(
  _______, _______,           _______,    _______,         _______, _______,                      _______, _______, _______, _______, _______, _______,
  KC_F1,     KC_F2,             KC_F3,      KC_F4,           KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  _______, _______, KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_KB_VOLUME_UP, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______,           KC_MRWD,    KC_MPLY,         KC_MFFD, _______, _______,    _______, _______, _______, _______, DT_PRNT, DT_DOWN,   DT_UP,
                                                  _______, _______, _______, _______,    _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   !  |   ?  |   #  |   *  |  "   |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   :  |   &  |   |  |  (   |  )   |                    |   è  | BLINE|  Up  | ELINE| PGUP | HOME |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   +  |   =  |   -  |  {   |  }   |-------.    ,-------|   é  | Left | Down | Right| PGDO | END  |
 * |------+------+------+------+------+------|  Del  |    |       |------+------+------+------+------+------|
 * |      |   _  |   <  |   >  |  [   |  ]   |-------|    |-------|   à  |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | / Space /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, KC_EXLM, KC_QUES, KC_HASH, KC_ASTR,  KC_DQT,                      _______, _______, _______, _______, _______, _______,
   KC_ESC, KC_COLN, KC_AMPR, KC_PIPE, KC_LPRN, KC_RPRN,                       EGRAVE, BEGLINE,   KC_UP, ENDLINE, KC_PGUP, KC_HOME,
  _______, KC_PLUS,  KC_EQL, KC_MINS, KC_LCBR, KC_RCBR,                       EAIGUE, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,  KC_END,
  _______, KC_UNDS, KC_LABK, KC_RABK, KC_LBRC, KC_RBRC,  KC_DEL,    _______,  AGRAVE, _______, _______, _______, _______, _______,
                             _______, _______, _______,  KC_SPC,    _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

// No need for the adjust layer for now.
// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
// void set_keylog(uint16_t keycode, keyrecord_t *record);
// const char *read_keylog(void);
// const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    // oled_write_ln(read_keylog(), false);
    // oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BEGLINE:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)));
      }
      return false;
    case ENDLINE:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_RGHT)));
      }
      return false;
    case EAIGUE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("e") "e");
      }
      return false;
    case EGRAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("`") "e");
      }
      return false;
    case AGRAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("`") "a");
      }
      return false;
  }
  return true;
}
