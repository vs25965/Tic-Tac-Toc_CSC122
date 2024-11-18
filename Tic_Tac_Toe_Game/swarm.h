#pragma once

#include <string>

#include "Board.h"
#include "player.h"
#include "winning_combos.h"

class swarm : public Player
{
private:
	Board* board;
	char mark;
	WinningCombos combos;

public:
	swarm(Board* board, char mark);
	void get_move() override;
	char get_mark() override;
	WinningCombos get_winning_combos() override;
};
