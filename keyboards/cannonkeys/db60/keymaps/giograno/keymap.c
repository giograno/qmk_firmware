/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// left hand home row mods
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LGUI_T(KC_F)

// right hand home row mods
#define HOME_J RGUI_T(KC_J)
#define HOME_K RALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)

// tab on tap, hyper on hold
#define TAB_HYP HYPR_T(KC_TAB)
// esc on tap, control on hold
#define ESC_CTL LCTL_T(KC_ESC)

// arrows on tap, layer on hold
#define LFT_ARR RALT_T(KC_LEFT)
#define DWN_ARR MEH(KC_DOWN)
#define RGT_ARR RCTL_T(KC_RIGHT)
#define UP_ARR  RSFT_T(KC_UP)


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN_SYMBOLS,
    _MEDIA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_ansi(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC,
    TAB_HYP, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
    ESC_CTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                    UP_ARR,
    MO(2),   KC_LALT, KC_LGUI,                            LT(1,KC_SPC),                      KC_RGUI, LFT_ARR, DWN_ARR,  RGT_ARR
  ),

  [_FN_SYMBOLS] = LAYOUT_60_ansi(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,     KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, KC_HOME, KC_PGDN,   KC_PGUP,  KC_END,  _______, _______, _______, _______,
    KC_CAPS, KC_PERC, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRAVE,KC_LEFT, KC_DOWN,   KC_UP,    KC_RGHT, _______, _______,          _______,
    _______, KC_HASH, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_UNDS, KC_MINUS,  KC_EQUAL, KC_PERC, _______,                   _______,
    _______, _______, _______,                            _______,                               _______, _______, _______, QK_BOOT
  ),

  [_MEDIA] = LAYOUT_60_ansi(
    _______, KC_BRID, KC_BRIU, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  )
};
