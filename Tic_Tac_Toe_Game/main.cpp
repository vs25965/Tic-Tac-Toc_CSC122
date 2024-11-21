#include <iostream>

#include "Board.h"
#include "Console.h"
#include "Gamestate.h"
#include "swarm.h"
#include "pyromancer.h"
#include "HumanPlayer.h"
#include "Menus.h"
#include "Game.h"
#include "Validator.h"

using namespace std;

int main()
{
	
	Board bd; // Create a single Board instance
	bool play_again = true;
	Validator validate(&bd);
	Menus menu(&bd);

	cout << "\nWelcome to tic Tac Toe Game - Human vs Human\n" << endl;

	while (play_again)
	{
		int choice = menu.main_menu();

		if (choice == 1)
		{
			Board board;
			GameState game_state(&board);
			Console console(&board);
			HumanPlayer player_one(&board, 'X');
			HumanPlayer player_two(&board, 'O');
			Game game(&console, &game_state, &player_one, &player_two);

			game.start();

		}
		else if (choice == 2)
		{
			Board board;
			GameState game_state(&board);
			Console console(&board);
			Pyromancer player_one(&board, 'X');
			Pyromancer player_two(&board, 'O');
			Game game(&console, &game_state, &player_one, &player_two);

			game.start();
		}
		else if (choice == 3)
		{
			Board board;
			GameState game_state(&board);
			Console console(&board);
			swarm player_one(&board, 'X');
			swarm player_two(&board, 'O');
			Game game(&console, &game_state, &player_one, &player_two);

			game.start();
		}
		else if (choice == 4)
		{
			Board board;
			GameState game_state(&board);
			Console console(&board);
			swarm player_one(&board, 'X');
			Pyromancer player_two(&board, 'O');
			Game game(&console, &game_state, &player_one, &player_two);

			game.start();
		}
		else if (choice == 5)
		{
			Board board;
			GameState game_state(&board);
			Console console(&board);
			Pyromancer player_one(&board, 'X');
			swarm player_two(&board, 'O');
			Game game(&console, &game_state, &player_one, &player_two);

			game.start();
		}
		
		cout << "\nDo you want to play again? - type 'yes' or 'no'";
		string user_again;
		user_again = validate.main_validator("yes","no");

		if (user_again == "yes") {
			play_again = true;

			bd.clear(); // Reset the game state to "in-progress"
		
		}
		else {
			play_again = false;
		}

	}

	cout << "Thank you for playing!" << endl;
		
	
	return 0;
   
}
