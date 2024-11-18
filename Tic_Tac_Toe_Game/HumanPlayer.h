#pragma once

#include <string>

#include "Board.h"
#include "player.h"
#include "winning_combos.h"


class HumanPlayer:public Player
{
private:
	Board* board;
	char mark;
	WinningCombos combos;


public:
	HumanPlayer(Board* board, char mark);
	void get_move() override;
	char get_mark() override;
	WinningCombos get_winning_combos() override;
};
