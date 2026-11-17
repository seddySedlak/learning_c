#include "resistor_color_duo.h"

#include <stdint.h>

uint16_t color_code(resistor_band_t colors[]) {
    uint16_t result = colors[0] * 10 + colors[1];
    return result;
}
