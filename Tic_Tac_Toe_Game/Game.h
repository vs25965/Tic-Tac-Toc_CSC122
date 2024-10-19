#pragma once

#include "GameState.h"
#include "console.h"
#include "HumanPlayer.h"

class Game
{
private:
	Console* console;
	GameState* game_state;
	HumanPlayer* player_one;
	HumanPlayer* player_two;
	HumanPlayer* current_player;

public:
	Game(Console* console, GameState* game_state, HumanPlayer* player_one, HumanPlayer* player_two);
	void start();
};

