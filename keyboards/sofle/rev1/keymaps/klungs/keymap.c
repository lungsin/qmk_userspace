// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "keycodes.h"
#include QMK_KEYBOARD_H

#include "encoder.c"
#include "config.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//        ┌──────┬───┬──────┬──────┬──────┬─────────────┐                    ┌─────────────────┬──────┬──────┬──────┬───┬──────┐
//        │  `   │ 1 │  2   │  3   │  4   │      5      │                    │        6        │  7   │  8   │  9   │ 0 │  -   │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ tab  │ f │  k   │  n   │  g   │      w      │                    │        j        │  .   │  u   │  o   │ y │ bspc │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ esc  │ s │  t   │  r   │  d   │      b      │                    │        m        │  l   │  e   │  a   │ i │  /   │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┼──────┐   ┌─────────┼─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ lsft │ v │  z   │  x   │  c   │      p      │ mute │   │ QK_BOOT │        ,        │  h   │  '   │  q   │ ; │ rsft │
//        └──────┴───┼──────┼──────┼──────┼─────────────┼──────┤   ├─────────┼─────────────────┼──────┼──────┼──────┼───┴──────┘
//                   │ lgui │ lalt │ lctl │ MO(_SYMBOL) │ spc  │   │   spc   │ MO(_NAVIGATION) │ rctl │ ralt │ rgui │
//                   └──────┴──────┴──────┴─────────────┴──────┘   └─────────┴─────────────────┴──────┴──────┴──────┘
[_KLUNGSMAK] = LAYOUT(
      KC_GRV  , KC_1 , KC_2    , KC_3    , KC_4    , KC_5        ,                         KC_6            , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS,
      KC_TAB  , KC_F , KC_K    , KC_N    , KC_G    , KC_W        ,                         KC_J            , KC_DOT  , KC_U    , KC_O    , KC_Y    , KC_BSPC,
      KC_ESC  , KC_S , KC_T    , KC_R    , KC_D    , KC_B        ,                         KC_M            , KC_L    , KC_E    , KC_A    , KC_I    , KC_SLSH,
      KC_LSFT , KC_V , KC_Z    , KC_X    , KC_C    , KC_P        , KC_MUTE ,     QK_BOOT , KC_COMM         , KC_H    , KC_QUOT , KC_Q    , KC_SCLN , KC_RSFT,
                       KC_LGUI , KC_LALT , KC_LCTL , MO(_SYMBOL) , KC_SPC  ,     KC_SPC  , MO(_NAVIGATION) , KC_RCTL , KC_RALT , KC_RGUI
),

//        ┌──────┬───┬──────┬──────┬──────┬─────────────┐                    ┌─────────────────┬──────┬──────┬──────┬───┬──────┐
//        │  `   │ 1 │  2   │  3   │  4   │      5      │                    │        6        │  7   │  8   │  9   │ 0 │  -   │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ tab  │ q │  w   │  e   │  r   │      t      │                    │        y        │  u   │  i   │  o   │ p │ bspc │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ esc  │ a │  s   │  d   │  f   │      g      │                    │        h        │  j   │  k   │  l   │ ; │  '   │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┼──────┐   ┌─────────┼─────────────────┼──────┼──────┼──────┼───┼──────┤
//        │ lsft │ z │  x   │  c   │  v   │      b      │ mute │   │ QK_BOOT │        n        │  m   │  ,   │  .   │ / │ rsft │
//        └──────┴───┼──────┼──────┼──────┼─────────────┼──────┤   ├─────────┼─────────────────┼──────┼──────┼──────┼───┴──────┘
//                   │ lgui │ lalt │ lctl │ MO(_SYMBOL) │ spc  │   │   spc   │ MO(_NAVIGATION) │ rctl │ ralt │ rgui │
//                   └──────┴──────┴──────┴─────────────┴──────┘   └─────────┴─────────────────┴──────┴──────┴──────┘
[_QWERTY] = LAYOUT(
      KC_GRV  , KC_1 , KC_2    , KC_3    , KC_4    , KC_5        ,                         KC_6            , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS,
      KC_TAB  , KC_Q , KC_W    , KC_E    , KC_R    , KC_T        ,                         KC_Y            , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSPC,
      KC_ESC  , KC_A , KC_S    , KC_D    , KC_F    , KC_G        ,                         KC_H            , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT,
      KC_LSFT , KC_Z , KC_X    , KC_C    , KC_V    , KC_B        , KC_MUTE ,     QK_BOOT , KC_N            , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT,
                       KC_LGUI , KC_LALT , KC_LCTL , MO(_SYMBOL) , KC_SPC  ,     KC_SPC  , MO(_NAVIGATION) , KC_RCTL , KC_RALT , KC_RGUI
),

//        ┌─────┬────┬─────┬─────┬─────┬─────┐               ┌─────────────┬─────┬─────┬─────┬─────┬─────┐
//        │ f12 │ f1 │ f2  │ f3  │ f4  │ f5  │               │     f6      │ f7  │ f8  │ f9  │ f10 │ f11 │
//        ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │  `  │ 1  │  2  │  3  │  4  │  5  │               │      6      │  7  │  8  │  9  │  0  │  |  │
//        ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │  ~  │ !  │  @  │  #  │  $  │  %  │               │      ^      │  &  │  *  │  (  │  )  │  \  │
//        ├─────┼────┼─────┼─────┼─────┼─────┼─────┐   ┌─────┼─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │     │ [  │  {  │  =  │  _  │  <  │     │   │     │      >      │  +  │  -  │  }  │  ]  │     │
//        └─────┴────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────────────┼─────┼─────┼─────┼─────┴─────┘
//                   │     │     │     │     │     │   │     │ MO(_NUMPAD) │     │     │     │
//                   └─────┴─────┴─────┴─────┴─────┘   └─────┴─────────────┴─────┴─────┴─────┘
[_SYMBOL] = LAYOUT(
      KC_F12  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                         KC_F6       , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11 ,
      KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                         KC_6        , KC_7    , KC_8    , KC_9    , KC_0    , KC_PIPE,
      KC_TILD , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,                         KC_CIRC     , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_BSLS,
      KC_TRNS , KC_LBRC , KC_LCBR , KC_EQL  , KC_UNDS , KC_LT   , KC_TRNS ,     KC_TRNS , KC_GT       , KC_PLUS , KC_MINS , KC_RCBR , KC_RBRC , KC_TRNS,
                          KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , MO(_NUMPAD) , KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌──────┬───────────────┬───────────────┬───────────────┬───────────────┬───────────────┐               ┌──────┬────────────┬──────┬────────────┬──────┬──────┐
//        │      │               │               │               │               │               │               │      │            │      │            │      │      │
//        ├──────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┤               ├──────┼────────────┼──────┼────────────┼──────┼──────┤
//        │      │      esc      │  LALT(left)   │    LCTL(f)    │  LALT(rght)   │      ins      │               │ pgup │ LCTL(left) │  up  │ LCTL(rght) │ bspc │ bspc │
//        ├──────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┤               ├──────┼────────────┼──────┼────────────┼──────┼──────┤
//        │ caps │ OSM(MOD_LSFT) │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_RALT) │               │ pgdn │    left    │ down │    rght    │ ent  │ bspc │
//        ├──────┼───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────┐   ┌─────┼──────┼────────────┼──────┼────────────┼──────┼──────┤
//        │      │    LCTL(z)    │    LCTL(x)    │    LCTL(c)    │    LCTL(v)    │     lgui      │     │   │     │ caps │    home    │ pscr │    end     │ del  │      │
//        └──────┴───────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────┤   ├─────┼──────┼────────────┼──────┼────────────┼──────┴──────┘
//                               │               │               │               │  MO(_NUMPAD)  │ spc │   │     │      │            │      │            │
//                               └───────────────┴───────────────┴───────────────┴───────────────┴─────┘   └─────┴──────┴────────────┴──────┴────────────┘
[_NAVIGATION] = LAYOUT(
      KC_TRNS , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,                         KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS,
      KC_TRNS , KC_ESC        , LALT(KC_LEFT) , LCTL(KC_F)    , LALT(KC_RGHT) , KC_INS        ,                         KC_PGUP , LCTL(KC_LEFT) , KC_UP   , LCTL(KC_RGHT) , KC_BSPC , KC_BSPC,
      KC_CAPS , OSM(MOD_LSFT) , OSM(MOD_LGUI) , OSM(MOD_LALT) , OSM(MOD_LCTL) , OSM(MOD_RALT) ,                         KC_PGDN , KC_LEFT       , KC_DOWN , KC_RGHT       , KC_ENT  , KC_BSPC,
      KC_TRNS , LCTL(KC_Z)    , LCTL(KC_X)    , LCTL(KC_C)    , LCTL(KC_V)    , KC_LGUI       , KC_TRNS ,     KC_TRNS , KC_CAPS , KC_HOME       , KC_PSCR , KC_END        , KC_DEL  , KC_TRNS,
                                KC_TRNS       , KC_TRNS       , KC_TRNS       , MO(_NUMPAD)   , KC_SPC  ,     KC_TRNS , KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS
),

//        ┌─────────┬───────────────┬────────────────┬───────────────┬───────────────┬───────────────┐               ┌─────┬─────┬─────┬─────┬──────┬─────────┐
//        │ QK_BOOT │    CG_TOGG    │ DF(_KLUNGSMAK) │  DF(_QWERTY)  │      no       │      no       │               │ no  │ no  │ no  │ no  │  no  │ QK_BOOT │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │      no       │      kp_=      │     kp_*      │     kp_+      │      no       │               │ no  │  7  │  8  │  9  │ bspc │   no    │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │ OSM(MOD_LSFT) │ OSM(MOD_LGUI)  │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_RALT) │               │ no  │  4  │  5  │  6  │ ent  │   no    │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┼─────┐   ┌─────┼─────┼─────┼─────┼─────┼──────┼─────────┤
//        │ MO(_FN) │      no       │       no       │     kp_/      │     kp_-      │      no       │ no  │   │ no  │ no  │  1  │  2  │  3  │  0   │   no    │
//        └─────────┴───────────────┼────────────────┼───────────────┼───────────────┼───────────────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼──────┴─────────┘
//                                  │                │               │               │               │     │   │     │     │     │     │     │
//                                  └────────────────┴───────────────┴───────────────┴───────────────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
[_NUMPAD] = LAYOUT(
      QK_BOOT , CG_TOGG       , DF(_KLUNGSMAK) , DF(_QWERTY)   , KC_NO         , KC_NO         ,                         KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , QK_BOOT,
      KC_NO   , KC_NO         , KC_PEQL        , KC_PAST       , KC_PPLS       , KC_NO         ,                         KC_NO   , KC_7    , KC_8    , KC_9    , KC_BSPC , KC_NO  ,
      KC_NO   , OSM(MOD_LSFT) , OSM(MOD_LGUI)  , OSM(MOD_LALT) , OSM(MOD_LCTL) , OSM(MOD_RALT) ,                         KC_NO   , KC_4    , KC_5    , KC_6    , KC_ENT  , KC_NO  ,
      MO(_FN) , KC_NO         , KC_NO          , KC_PSLS       , KC_PMNS       , KC_NO         , KC_NO   ,     KC_NO   , KC_NO   , KC_1    , KC_2    , KC_3    , KC_0    , KC_NO  ,
                                KC_TRNS        , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌─────────┬───────────────┬────────────────┬───────────────┬───────────────┬───────────────┐               ┌─────┬─────┬─────┬─────┬──────┬─────────┐
//        │ QK_BOOT │    CG_TOGG    │ DF(_KLUNGSMAK) │  DF(_QWERTY)  │      no       │      no       │               │ no  │ no  │ no  │ no  │  no  │ QK_BOOT │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │      no       │       no       │      no       │      no       │      no       │               │ f12 │ f7  │ f8  │ f9  │ bspc │   no    │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │ OSM(MOD_LSFT) │ OSM(MOD_LGUI)  │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_RALT) │               │ f11 │ f4  │ f5  │ f6  │ ent  │   no    │
//        ├─────────┼───────────────┼────────────────┼───────────────┼───────────────┼───────────────┼─────┐   ┌─────┼─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │      no       │       no       │      no       │      no       │      no       │ no  │   │ no  │ f10 │ f1  │ f2  │ f3  │  no  │   no    │
//        └─────────┴───────────────┼────────────────┼───────────────┼───────────────┼───────────────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼──────┴─────────┘
//                                  │                │               │               │               │     │   │     │     │     │     │     │
//                                  └────────────────┴───────────────┴───────────────┴───────────────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
[_FN] = LAYOUT(
      QK_BOOT , CG_TOGG       , DF(_KLUNGSMAK) , DF(_QWERTY)   , KC_NO         , KC_NO         ,                         KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , QK_BOOT,
      KC_NO   , KC_NO         , KC_NO          , KC_NO         , KC_NO         , KC_NO         ,                         KC_F12  , KC_F7   , KC_F8   , KC_F9   , KC_BSPC , KC_NO  ,
      KC_NO   , OSM(MOD_LSFT) , OSM(MOD_LGUI)  , OSM(MOD_LALT) , OSM(MOD_LCTL) , OSM(MOD_RALT) ,                         KC_F11  , KC_F4   , KC_F5   , KC_F6   , KC_ENT  , KC_NO  ,
      KC_NO   , KC_NO         , KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO   ,     KC_NO   , KC_F10  , KC_F1   , KC_F2   , KC_F3   , KC_NO   , KC_NO  ,
                                KC_TRNS        , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
)
};
