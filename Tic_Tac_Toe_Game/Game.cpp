#include "Game.h"
#include <iostream>
#include <cctype> 

using namespace std;

Game::Game(Console* console, GameState* game_state, HumanPlayer* player_one, HumanPlayer* player_two)
{
    this->console = console;
    this->game_state = game_state;
    this->player_one = player_one;
    this->player_two = player_two;
    this->current_player = player_one;
}

void Game::start()
{
    string user_over;
    bool game_again = false;
    int game_counter = 0;
    do {
        while (game_state->current_state() == "in-progress") {

            game_counter++;
            cout << console->display();
            current_player->get_move();
            if (current_player->mark == 'X') {
                current_player = player_two;
            }
            else {
                current_player = player_one;
            }
            if (game_counter == 9)
            {
                break;
            }
        }

        if (game_counter == 9 && (game_state->current_state() != "X wins" && game_state->current_state() != "O wins"))
        {
            cout << "It's a draw";
        }
        else
        {
            cout << "\n" << game_state->current_state() << endl;
        }
        cout << "\nDo you want to play again? - type 'yes' or 'no'";
        cin >> user_over;

        if (user_over == "yes") {
            game_again = true;
            
            game_state->reset(); // Reset the game state to "in-progress"
            current_player = player_one; // Reset the current player if needed
            game_counter = 0;
        }
        else {
            game_again = false;
        }

    } while (game_again);

}