#include "display.h"
#include "ssd1306.h"

SSD1306 display;

void init_display() {
    ssd1306_init(&display, 128, 64);
    ssd1306_clear(&display);
}

void update_display_position(int x, int y) {
    int pos_x = (x * 120) / 4095;  
    int pos_y = (y * 56) / 4095;
    
    ssd1306_clear(&display);
    ssd1306_draw_filled_rect(&display, pos_x, pos_y, 8, 8, 1);
    ssd1306_update(&display);
}
