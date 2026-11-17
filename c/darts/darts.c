#include "darts.h"

#include <stdlib.h>
#include <stdint.h>

typedef struct {
    float radius;
    uint8_t points;
} ring_t;

static const ring_t rings[] = {
    {1.0F, 10},
    {5.0F, 5},
    {10.0F, 1}
};

static const size_t length_of_array = sizeof(rings) / sizeof(rings[0]);

static int is_in(coordinate_t position, float radius) {
    if ((position.x * position.x + position.y * position.y) <= radius * radius) {
        return 1;
    }

    return 0;
}

uint8_t score(coordinate_t positon) {
    for (size_t i = 0; i < length_of_array; i++) {
        if (is_in(positon, rings[i].radius)) {
            return rings[i].points;
        }
    }

    return 0;
}
