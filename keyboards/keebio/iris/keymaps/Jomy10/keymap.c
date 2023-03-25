#include QMK_KEYBOARD_H
// #include "print.h"

#define BE_MINS KC_EQL
#define BE_M KC_SCLN
#define BE_EQ KC_SLSH

#define L_MAIN 0
#define L_SECOND 2
#define L_FN 3
#define L_WIN 1
#define L_WINALT 4

enum custom_keycodes {
  C_RAND = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NUBS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    BE_M,    KC_ENT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,           MO(L_SECOND),KC_N,KC_M,    KC_COMM, KC_DOT,  KC_BSLS, BE_EQ,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LGUI, KC_SPC,                    KC_RSFT, KC_LCTL, MO(L_FN)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [L_SECOND] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_QUOT, KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,          KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_SLSH, KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [L_FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_BRID, KC_BRIU, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE,                            BL_TOGG, BL_STEP, BL_UP,   BL_ON,   KC_NO,   TG(L_WIN),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_EJCT, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,   KC_VOLU,                            RGB_TOG, BL_BRTG, BL_DOWN, BL_OFF,  KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,   KC_VOLD,                            RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────── ──┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_WH_D, KC_WH_L, KC_WH_R, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO,             C_RAND,  RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬─────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCAP, KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [L_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    BE_M,    KC_ENT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,           MO(L_SECOND),KC_N,KC_M,    KC_COMM, KC_DOT,  KC_BSLS, BE_EQ,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LCTL, KC_SPC,                    KC_RSFT, KC_LGUI, MO(L_FN)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case C_RAND:
      if (record->event.pressed) {
        tap_random_base64();
      }
      return false;
  }
  return true;
  // switch (keycode) {
  //   case QWERTY:
  //     if (record->event.pressed) {
  //       set_single_persistent_default_layer(_AZERTY);
  //     }
  //     return false;
  //     break;
  //   case LOWER:
  //     if (record->event.pressed) {
  //       layer_on(_LOWER);
  //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
  //     } else {
  //       layer_off(_LOWER);
  //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
  //     }
  //     return false;
  //     break;
  //   case RAISE:
  //     if (record->event.pressed) {
  //       layer_on(_RAISE);
  //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
  //     } else {
  //       layer_off(_RAISE);
  //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
  //     }
  //     return false;
  //     break;
  //   case ADJUST:
  //     if (record->event.pressed) {
  //       layer_on(_ADJUST);
  //     } else {
  //       layer_off(_ADJUST);
  //     }
  //     return false;
  //     break;
  // }
  // return true;
}
