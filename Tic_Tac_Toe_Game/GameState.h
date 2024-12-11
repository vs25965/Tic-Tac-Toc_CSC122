#pragma once

#include <string>
#include "player.h"
#include <vector>
#include "board.h"
using namespace std;
class GameState
{
private:
	Board* board;
	bool winning_combo(vector<int> combo);
	string select_winner(int cell);
	

public:
	GameState(Board* board);
	string current_state(Player* current_player);

};
