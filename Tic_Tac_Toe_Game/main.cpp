#include <iostream>

#include "Board.h"
#include "Console.h"
#include "Gamestate.h"
#include "HumanPlayer.h"
#include "Game.h"

using namespace std;

int main()
{
	cout << "\nWelcome to tic Tac Toe Game - Human vs Human\n" << endl;

	Board board;
	GameState game_state(&board);
	Console console(&board);
	HumanPlayer player_one(&board, 'X');
	HumanPlayer player_two(&board, 'O');
	HumanPlayer current_player = player_one;
	Game game(&console, &game_state, &player_one, &player_two);

	game.start();

}