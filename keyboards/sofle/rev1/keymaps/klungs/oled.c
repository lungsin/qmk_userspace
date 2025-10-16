// Sets up what the OLED screens display.

#ifdef OLED_ENABLE

#    include QMK_KEYBOARD_H
#    include "oled_driver.h"

#    ifdef LUNA_ENABLE
#        include "luna.h"
#    endif

#    ifdef OCEAN_DREAM_ENABLE
#        include "ocean_dream.h"
#    endif

#    include "layer.h"

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY: // _QWERTY
            oled_write_ln_P(PSTR("Qwrt\n"), false);
            break;
        case _KLUNGSMAK: // _KLUNGSMAK
            oled_write_ln_P(PSTR("Klng\n"), false);
            break;
        default:
            oled_write_P(PSTR("Mod"), false);
            break;
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
        case _KLUNGSMAK:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Sym\n"), false);
            break;
        case _NAVIGATION:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Num"), false);
            break;
        case _FN:
            oled_write_P(PSTR("Fn"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    // return rotation;
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
#    ifdef LUNA_ENABLE
        led_usb_state = host_keyboard_led_state();
        render_luna(0, 13);
#    endif
    } else {
#    ifdef OCEAN_DREAM_ENABLE
        render_stars();
#    endif
    }
    return false;
}

#endif
