#include "grains.h"

#include <stdio.h>

uint64_t square(uint8_t index) {
    if (index < 1 || index > 64) {
        return 0;
    }

    uint64_t result = 1;

    for (size_t i = 1; i < index; i++) {
        result *= 2;
    }    
    
    return result;
}

uint64_t total(void) {
    const size_t BOARD_SIZE = 64;

    uint64_t sqaure = 1;
    uint64_t result = 0;

    for (size_t i = 0; i < BOARD_SIZE; i++) {
        result += sqaure;
        sqaure *= 2;
    }

    return result;
}