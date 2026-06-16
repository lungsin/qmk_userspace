// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "keycodes.h"
#include "keymap_us.h"
#include QMK_KEYBOARD_H

#include "encoder.c"
#include "layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//        ┌──────┬───┬──────┬──────┬──────┬─────────────┐                    ┌─────────────────┬─────┬──────┬──────┬───┬───────────┐
//        │  `   │ 1 │  2   │  3   │  4   │      5      │                    │        6        │  7  │  8   │  9   │ 0 │     -     │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ tab  │ f │  k   │  n   │  g   │      w      │                    │        j        │  .  │  u   │  o   │ y │ bACKSPACE │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ esc  │ s │  t   │  r   │  d   │      b      │                    │        m        │  l  │  e   │  a   │ i │     /     │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┼──────┐   ┌─────────┼─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ lsft │ v │  z   │  x   │  c   │      p      │ mute │   │ QK_BOOT │        ,        │  h  │  '   │  q   │ ; │ RSFT_T(\) │
//        └──────┴───┼──────┼──────┼──────┼─────────────┼──────┤   ├─────────┼─────────────────┼─────┼──────┼──────┼───┴───────────┘
//                   │ lgui │ lalt │ lctl │ MO(_SYMBOL) │ spc  │   │   spc   │ MO(_NAVIGATION) │ ent │ ralt │ rgui │
//                   └──────┴──────┴──────┴─────────────┴──────┘   └─────────┴─────────────────┴─────┴──────┴──────┘
[_KLUNGSMAK] = LAYOUT(
      KC_GRV  , KC_1 , KC_2    , KC_3    , KC_4    , KC_5        ,                          KC_6            , KC_7     , KC_8    , KC_9    , KC_0    , KC_MINS             ,
      KC_TAB  , KC_F , KC_K    , KC_N    , KC_G    , KC_W        ,                          KC_J            , KC_DOT   , KC_U    , KC_O    , KC_Y    , KC_BACKSPACE        ,
      KC_ESC  , KC_S , KC_T    , KC_R    , KC_D    , KC_B        ,                          KC_M            , KC_L     , KC_E    , KC_A    , KC_I    , KC_SLASH            ,
      KC_LSFT , KC_V , KC_Z    , KC_X    , KC_C    , KC_P        , KC_MUTE  ,     QK_BOOT , KC_COMM         , KC_H     , KC_QUOT , KC_Q    , KC_SCLN , RSFT_T(KC_BACKSLASH),
                       KC_LGUI , KC_LALT , KC_LCTL , MO(_SYMBOL) , KC_SPACE ,     KC_SPC  , MO(_NAVIGATION) , KC_ENTER , KC_RALT , KC_RGUI
),

//        ┌──────┬───┬──────┬──────┬──────┬─────────────┐                    ┌─────────────────┬─────┬──────┬──────┬───┬───────────┐
//        │  `   │ 1 │  2   │  3   │  4   │      5      │                    │        6        │  7  │  8   │  9   │ 0 │     -     │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ tab  │ q │  w   │  e   │  r   │      t      │                    │        y        │  u  │  i   │  o   │ p │ bACKSPACE │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┤                    ├─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ esc  │ a │  s   │  d   │  f   │      g      │                    │        h        │  j  │  k   │  l   │ ; │     '     │
//        ├──────┼───┼──────┼──────┼──────┼─────────────┼──────┐   ┌─────────┼─────────────────┼─────┼──────┼──────┼───┼───────────┤
//        │ lsft │ z │  x   │  c   │  v   │      b      │ mute │   │ QK_BOOT │        n        │  m  │  ,   │  .   │ / │ RSFT_T(\) │
//        └──────┴───┼──────┼──────┼──────┼─────────────┼──────┤   ├─────────┼─────────────────┼─────┼──────┼──────┼───┴───────────┘
//                   │ lgui │ lalt │ lctl │ MO(_SYMBOL) │ spc  │   │   spc   │ MO(_NAVIGATION) │ ent │ ralt │ rgui │
//                   └──────┴──────┴──────┴─────────────┴──────┘   └─────────┴─────────────────┴─────┴──────┴──────┘
[_QWERTY] = LAYOUT(
      KC_GRV  , KC_1 , KC_2    , KC_3    , KC_4    , KC_5        ,                          KC_6            , KC_7     , KC_8    , KC_9    , KC_0    , KC_MINS             ,
      KC_TAB  , KC_Q , KC_W    , KC_E    , KC_R    , KC_T        ,                          KC_Y            , KC_U     , KC_I    , KC_O    , KC_P    , KC_BACKSPACE        ,
      KC_ESC  , KC_A , KC_S    , KC_D    , KC_F    , KC_G        ,                          KC_H            , KC_J     , KC_K    , KC_L    , KC_SCLN , KC_QUOT             ,
      KC_LSFT , KC_Z , KC_X    , KC_C    , KC_V    , KC_B        , KC_MUTE  ,     QK_BOOT , KC_N            , KC_M     , KC_COMM , KC_DOT  , KC_SLSH , RSFT_T(KC_BACKSLASH),
                       KC_LGUI , KC_LALT , KC_LCTL , MO(_SYMBOL) , KC_SPACE ,     KC_SPC  , MO(_NAVIGATION) , KC_ENTER , KC_RALT , KC_RGUI
),

//        ┌─────┬────┬─────┬─────┬─────┬─────┐               ┌─────────────┬─────┬─────┬─────┬─────┬─────┐
//        │ f12 │ f1 │ f2  │ f3  │ f4  │ f5  │               │     f6      │ f7  │ f8  │ f9  │ f10 │ f11 │
//        ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │  `  │ 1  │  2  │  3  │  4  │  5  │               │      6      │  7  │  8  │  9  │  0  │     │
//        ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │  ~  │ !  │  @  │  #  │  $  │  %  │               │      ^      │  &  │  *  │  (  │  )  │  ?  │
//        ├─────┼────┼─────┼─────┼─────┼─────┼─────┐   ┌─────┼─────────────┼─────┼─────┼─────┼─────┼─────┤
//        │ ent │ <  │  {  │  [  │  =  │  _  │     │   │     │      -      │  +  │  ]  │  }  │  >  │  |  │
//        └─────┴────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────────────┼─────┼─────┼─────┼─────┴─────┘
//                   │     │     │     │     │     │   │     │ MO(_NUMPAD) │     │     │     │
//                   └─────┴─────┴─────┴─────┴─────┘   └─────┴─────────────┴─────┴─────┴─────┘
[_SYMBOL] = LAYOUT(
      KC_F12   , KC_F1   , KC_F2   , KC_F3   , KC_F4    , KC_F5         ,                         KC_F6       , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11     ,
      KC_GRV   , KC_1    , KC_2    , KC_3    , KC_4     , KC_5          ,                         KC_6        , KC_7    , KC_8    , KC_9    , KC_0    , KC_TRNS    ,
      KC_TILD  , KC_EXLM , KC_AT   , KC_HASH , KC_DLR   , KC_PERC       ,                         KC_CIRC     , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_QUESTION,
      KC_ENTER , KC_LT   , KC_LCBR , KC_LBRC , KC_EQUAL , KC_UNDERSCORE , KC_TRNS ,     KC_TRNS , KC_MINS     , KC_PLUS , KC_RBRC , KC_RCBR , KC_GT   , KC_PIPE    ,
                           KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS       , KC_TRNS ,     KC_TRNS , MO(_NUMPAD) , KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌─────┬───────────────┬───────────────┬───────────────┬───────────────┬─────────────┐               ┌──────┬──────┬──────┬──────┬──────┬─────┐
//        │     │               │               │               │               │             │               │      │      │      │      │      │     │
//        ├─────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤               ├──────┼──────┼──────┼──────┼──────┼─────┤
//        │     │      esc      │       {       │     caps      │       }       │     ins     │               │ caps │  [   │  up  │  ]   │ bspc │     │
//        ├─────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┤               ├──────┼──────┼──────┼──────┼──────┼─────┤
//        │ esc │ OSM(MOD_LSFT) │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │    lgui     │               │ pgup │ left │ down │ rght │ ent  │     │
//        ├─────┼───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────┐   ┌─────┼──────┼──────┼──────┼──────┼──────┼─────┤
//        │     │      ent      │     pgup      │      ent      │     pgdn      │    pscr     │     │   │     │ pgdn │ home │ pscr │ end  │ del  │     │
//        └─────┴───────────────┼───────────────┼───────────────┼───────────────┼─────────────┼─────┤   ├─────┼──────┼──────┼──────┼──────┼──────┴─────┘
//                              │               │               │               │ MO(_NUMPAD) │ spc │   │     │      │      │      │      │
//                              └───────────────┴───────────────┴───────────────┴─────────────┴─────┘   └─────┴──────┴──────┴──────┴──────┘
[_NAVIGATION] = LAYOUT(
      KC_TRNS , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS     ,                         KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
      KC_TRNS , KC_ESC        , KC_LCBR       , KC_CAPS       , KC_RCBR       , KC_INS      ,                         KC_CAPS , KC_LBRC , KC_UP   , KC_RBRC , KC_BSPC , KC_TRNS,
      KC_ESC  , OSM(MOD_LSFT) , OSM(MOD_LGUI) , OSM(MOD_LALT) , OSM(MOD_LCTL) , KC_LGUI     ,                         KC_PGUP , KC_LEFT , KC_DOWN , KC_RGHT , KC_ENT  , KC_TRNS,
      KC_TRNS , KC_ENTER      , KC_PGUP       , KC_ENTER      , KC_PGDN       , KC_PSCR     , KC_TRNS ,     KC_TRNS , KC_PGDN , KC_HOME , KC_PSCR , KC_END  , KC_DEL  , KC_TRNS,
                                KC_TRNS       , KC_TRNS       , KC_TRNS       , MO(_NUMPAD) , KC_SPC  ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌─────────┬────────────────┬───────────────┬───────────────┬───────────────┬───────────────┐               ┌─────┬─────┬─────┬─────┬──────┬─────────┐
//        │   f12   │       f1       │      f2       │      f3       │      f4       │      f5       │               │ f6  │ f7  │ f8  │ f9  │ f10  │   f11   │
//        ├─────────┼────────────────┼───────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │ CG_TOGG │       no       │     kp_=      │     kp_*      │     kp_+      │      no       │               │ no  │  7  │  8  │  9  │ bspc │   no    │
//        ├─────────┼────────────────┼───────────────┼───────────────┼───────────────┼───────────────┤               ├─────┼─────┼─────┼─────┼──────┼─────────┤
//        │   no    │ OSM(MOD_LSFT)  │ OSM(MOD_LGUI) │ OSM(MOD_LALT) │ OSM(MOD_LCTL) │ OSM(MOD_RALT) │               │ no  │  4  │  5  │  6  │ ent  │   no    │
//        ├─────────┼────────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────┐   ┌─────┼─────┼─────┼─────┼─────┼──────┼─────────┤
//        │ QK_BOOT │ DF(_KLUNGSMAK) │  DF(_QWERTY)  │      no       │      no       │      no       │ no  │   │ no  │ no  │  1  │  2  │  3  │  0   │ QK_BOOT │
//        └─────────┴────────────────┼───────────────┼───────────────┼───────────────┼───────────────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼──────┴─────────┘
//                                   │               │               │               │               │     │   │     │     │     │     │     │
//                                   └───────────────┴───────────────┴───────────────┴───────────────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
[_NUMPAD] = LAYOUT(
      KC_F12  , KC_F1          , KC_F2         , KC_F3         , KC_F4         , KC_F5         ,                         KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11 ,
      CG_TOGG , KC_NO          , KC_PEQL       , KC_PAST       , KC_PPLS       , KC_NO         ,                         KC_NO   , KC_7    , KC_8    , KC_9    , KC_BSPC , KC_NO  ,
      KC_NO   , OSM(MOD_LSFT)  , OSM(MOD_LGUI) , OSM(MOD_LALT) , OSM(MOD_LCTL) , OSM(MOD_RALT) ,                         KC_NO   , KC_4    , KC_5    , KC_6    , KC_ENT  , KC_NO  ,
      QK_BOOT , DF(_KLUNGSMAK) , DF(_QWERTY)   , KC_NO         , KC_NO         , KC_NO         , KC_NO   ,     KC_NO   , KC_NO   , KC_1    , KC_2    , KC_3    , KC_0    , QK_BOOT,
                                 KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
)
};
