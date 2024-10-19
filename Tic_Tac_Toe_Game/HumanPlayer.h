#pragma once

#include <string>

#include "Board.h"

class HumanPlayer
{
private:
	Board* board;

public:
	char mark;
	HumanPlayer(Board* board, char mark);
	void get_move();
};
