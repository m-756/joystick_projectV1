#ifndef SSD1306_H
#define SSD1306_H

#include <stdint.h>
#include "hardware/i2c.h"

#define SSD1306_ADDR 0x3C  // Endereço I2C do display

void ssd1306_init(i2c_inst_t *i2c);
void ssd1306_clear();
void ssd1306_draw_pixel(int x, int y, int color);
void ssd1306_update();
void ssd1306_draw_filled_rect(int x, int y, int w, int h, int color);

#endif