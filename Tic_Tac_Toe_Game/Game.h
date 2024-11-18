#pragma once

#include "GameState.h"
#include "Console.h"
#include "player.h"

class Game
{
private:
	Console* console;
	GameState* game_state;
	Player* player_one;
	Player* player_two;
	Player* current_player;
	Player* other_player;

public:
	Game(Console* console, GameState* game_state, Player* player_one, Player* player_two);
	void start();
};

