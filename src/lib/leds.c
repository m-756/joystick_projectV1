#include "leds.h"
#include "hardware/pwm.h"

void init_leds() {
    gpio_set_function(11, GPIO_FUNC_PWM);  // LED Azul
    gpio_set_function(12, GPIO_FUNC_PWM);  // LED Verde
    gpio_set_function(13, GPIO_FUNC_PWM);  // LED Vermelho
}

void update_led_brightness(int x, int y) {
    pwm_set_gpio_level(11, y);
    pwm_set_gpio_level(13, x);
}
