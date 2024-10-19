#pragma once

#include <string>

#include "board.h"
using namespace std;
class GameState
{
private:
	Board* board;
	bool three_in_a_row(int cell_one, int cell_two, int cell_three);
	string select_winner(int cell);
	int winning_combos[8][3];

public:
	GameState(Board* board);
	string current_state();
	void reset();
};
