#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "joystick.h"
#include "leds.h"
#include "display.h"
#include "buttons.h"

int main() {
    stdio_init_all();
    init_joystick();
    init_leds();
    init_display();
    init_buttons();

    while (1) {
        update_joystick();
        update_leds();
        update_display();
        sleep_ms(10);  // Pequeno delay para evitar alto consumo de CPU
    }
}
