#include QMK_KEYBOARD_H

// OLED Display Logic
bool oled_task_user(void) {
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Default\n"), false);
            break;
        default:
            oled_write_P(PSTR("Unknown\n"), false);
            break;
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    return false;
}

// Layout Matrix Mapping
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x5(
        KC_1,             KC_2,  // Top Row (2 keys)
              KC_3, KC_4, KC_5,        // Middle Row (3 keys)
        KC_6, KC_7, KC_8, KC_9, KC_0   // Bottom Row (5 keys)
    )
};
