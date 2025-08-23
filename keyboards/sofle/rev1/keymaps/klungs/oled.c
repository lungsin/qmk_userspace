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

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);

    switch (get_highest_layer(default_layer_state)) {
        case 0: // _QWERTY
            oled_write_ln_P(PSTR("Qwrt\n"), false);
            break;
        case 1: // _COLEMAK
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
        case 0: // _QWERTY
        case 1: // _COLEMAK
            oled_write_P(PSTR("Base\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Sym1\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("Sym2\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("Ext\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("Num"), false);
            break;
        case 6:
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
