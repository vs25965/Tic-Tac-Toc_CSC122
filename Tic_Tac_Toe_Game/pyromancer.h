#pragma once

#include "Board.h"
#include "player.h"
#include "Validator.h"
#include "winning_combos.h"

class Pyromancer : public Player {
    Board* board;
    WinningCombos combos;
    char mark;
    int counter_X = 0;
    int counter_O = 0;

public:
    Pyromancer(Board* board, char mark);
    void get_move() override;
    char get_mark() override;
    WinningCombos get_winning_combos() override;
};

