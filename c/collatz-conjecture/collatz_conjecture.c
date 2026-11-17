#include "collatz_conjecture.h"

#include <stdio.h>

int steps(int start) {
    if (start <= 0) {
        return ERROR_VALUE;
    }

    int n = start;
    size_t steps = 0;

    while (n != 1) {
        if (n % 2 == 0){
            n = n / 2;  
        }
        else {
            n = 3 * n + 1;
        }
        steps++;
    }
    
    return steps;
}