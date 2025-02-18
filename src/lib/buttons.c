#include "buttons.h"
#include "pico/stdlib.h"

void button_callback(uint gpio, uint32_t events) {
    if (gpio == 22) {
        toggle_led();
        toggle_display_border();
    } else if (gpio == 5) {
        toggle_leds_state();
    }
}

void init_buttons() {
    gpio_set_irq_enabled_with_callback(22, GPIO_IRQ_EDGE_FALL, true, &button_callback);
    gpio_set_irq_enabled_with_callback(5, GPIO_IRQ_EDGE_FALL, true, &button_callback);
}
