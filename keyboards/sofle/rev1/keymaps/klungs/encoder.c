#include QMK_KEYBOARD_H
#include "config.h"

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(DF(_KLUNGSMAK), DF(_QWERTY))},
    [1] = {ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(DF(_KLUNGSMAK), DF(_QWERTY))},
    [2] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI)},
    [3] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
    [4] = {ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
    [5] = {ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
};
#endif
