#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H


typedef enum {
    BLACK, // 0
    BROWN, // 1
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE // 9
    
} resistor_band_t;

int color_code(resistor_band_t color);

const resistor_band_t *colors(void);

#endif
