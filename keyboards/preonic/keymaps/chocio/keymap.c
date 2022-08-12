/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define V_____V _______

#define QWERTY_ 0
#define NUM_ 1
#define MOVE_ 2
#define FUNC_ 3

/* Norwegian special characters for Macos
*/
#define CTL_Q RALT(KC_Q)
#define CTL_A RALT(KC_A)
#define CTL_O RALT(KC_O)

/* Norwegian special characters for Windows
*/
#define CTL_Z RALT(KC_Z)
#define CTL_L RALT(KC_L)
#define CTL_W RALT(KC_W)

#define CTL_TAB LCTL_T(KC_TAB)

/* Layer setup
*/

#define L_NUM MO(NUM_)
#define L_MOVE MO(MOVE_)
#define L_FUNC MO(FUNC_)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[QWERTY_] = LAYOUT_preonic_1x2uC( \
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_QUOT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_APP,
  KC_LCTL, KC_LGUI, KC_RGUI, KC_LALT, L_NUM,       KC_SPC,       L_MOVE,  KC_RALT, KC_LOCK, L_FUNC,  KC_RSFT),

[NUM_] = LAYOUT_preonic_1x2uC(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______, KC_GRV,  KC_QUOT, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
  _______, XXXXXXX, KC_BSLS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
  _______, _______, _______, _______, V_____V,      _______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______),


[MOVE_] = LAYOUT_preonic_1x2uC(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, XXXXXXX, CTL_Q,   CTL_O,   CTL_A,   XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, _______,
  _______, XXXXXXX, CTL_Z,   CTL_L,   CTL_W,   XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, _______,
  _______, _______, _______, _______, XXXXXXX,      _______,     V_____V, XXXXXXX, XXXXXXX, XXXXXXX, _______),

[FUNC_] = LAYOUT_preonic_1x2uC(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  RESET,   DEBUG,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
  _______, _______, _______, _______, XXXXXXX,      _______,     XXXXXXX, XXXXXXX, XXXXXXX, V_____V, XXXXXXX)
};
