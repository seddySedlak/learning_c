#include "queen_attack.h"

#include <stdio.h>
#include <stdlib.h>


static int is_valid(position_t pos) {
    const int BOARD_MAX = 7;
    if (pos.row > BOARD_MAX || pos.column > BOARD_MAX) {
        return 0;
    }

    return 1;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if(!is_valid(queen_1) || !is_valid(queen_2)) {
        return INVALID_POSITION;
    }
    
    if (queen_1.column == queen_2.column && queen_1.row == queen_2.row) {
        return INVALID_POSITION;
    }

    if (queen_1.column == queen_2.column || queen_1.row == queen_2.row) {
        return CAN_ATTACK;
    }

    if (abs(queen_1.column - queen_2.column) == abs(queen_1.row - queen_2.row)) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}
