#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

//custom tap dance keys; add any other tap dance keys to this enum 
enum {
  TD_OPEN = 0,
  TD_CLOSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| ( { [ |    | ) } ] |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |ESC   | LAlt |LGUI  | /Space  /       \RAISE \  |ENTER |BackSP| Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_GRV,      KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,
  KC_TAB,      KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,     KC_EQL,
  KC_LSFT,     KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
  KC_LCTRL,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, TD(TD_OPEN),   TD(TD_CLOSE),   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_BSLS,
                              KC_ESC, KC_LALT, KC_LGUI,      KC_SPC,     TT(_RAISE), KC_ENT, KC_BSPC,   KC_DEL
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |ESC   | LAlt |LGUI  | /Space  /       \RAISE \  |ENTER |BackSP| Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | F12  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | FastF| Vup  |      |      |      |                    | PGUP | HOME |  Up  |  END |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS | Play | VDown|      |      |      |-------.    ,-------| PGDO | Left | Down | Right|      |      |
 * |------+------+------+------+------+------| ) } ] |    |       |------+------+------+------+------+------|
 * |      | Rwd  | Mute |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |ESC   | LAlt |LGUI  | /Space  /       \RAISE \  |ENTER |BackSP| Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
   KC_F12,   KC_F1,             KC_F2,   KC_F3,   KC_F4,   KC_F5,                             KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  _______, KC_MFFD,   KC_KB_VOLUME_UP, _______, _______, _______,                           KC_PGUP, KC_HOME,   KC_UP,  KC_END, _______, _______,
  _______, KC_MPLY, KC_KB_VOLUME_DOWN, _______, _______, _______,                           KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  _______, KC_MRWD,        KC_KB_MUTE, _______, _______, _______, TD(TD_CLOSE),    _______, _______, _______, _______, _______, _______, _______,
                                       _______, _______, _______,      _______,    _______, _______, _______, _______
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
 *                   |ESC   | LAlt |LGUI  | /Space  /       \RAISE \  |ENTER |BackSP| Del  |
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
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
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
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

// Tap dance for ( -> { -> [
void dance_open_finished (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code (KC_LSFT);
      register_code (KC_9);
      break;
    case 2:
      register_code (KC_LSFT);
      register_code (KC_LBRC);
      break;
    case 3:
      register_code (KC_LBRC);
      break;
    default:
      break;
  }
}

void dance_open_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_LSFT);
      unregister_code(KC_9);
      break;
    case 2:
      unregister_code(KC_LSFT);
      unregister_code(KC_LBRC);
      break;
    case 3:
      unregister_code(KC_LBRC);
      break;
    default:
      break;
  }
}

// Tap dance for ) -> } -> ]
void dance_close_finished (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_LSFT);
      register_code(KC_0);
      break;
    case 2:
      register_code(KC_LSFT);
      register_code(KC_RBRC);
      break;
    case 3:
      register_code(KC_RBRC);
      break;
    default:
      break;
  }
}

void dance_close_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_LSFT);
      unregister_code(KC_0);
      break;
    case 2:
      unregister_code(KC_LSFT);
      unregister_code(KC_RBRC);
      break;
    case 3:
      unregister_code(KC_RBRC);
      break;
    default:
      break;
  }
}

//All tap dance functions would go here. Only showing this one.
qk_tap_dance_action_t tap_dance_actions[] = {
 [TD_OPEN] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_open_finished, dance_open_reset),
 [TD_CLOSE] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_close_finished, dance_close_reset)
};
