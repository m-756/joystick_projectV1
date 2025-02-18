#ifndef BUTTONS_H
#define BUTTONS_H

void init_buttons();
void button_callback(uint gpio, uint32_t events);
void toggle_led();

#endif
