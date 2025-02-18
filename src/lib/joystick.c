#include "joystick.h"
#include "hardware/adc.h"

void init_joystick() {
    adc_init();
    adc_gpio_init(26);  // Eixo X
    adc_gpio_init(27);  // Eixo Y
}

void update_joystick() {
    adc_select_input(0);
    int x_value = adc_read();
    
    adc_select_input(1);
    int y_value = adc_read();

    update_led_brightness(x_value, y_value);
    update_display_position(x_value, y_value);
}
