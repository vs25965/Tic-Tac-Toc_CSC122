#include "Game.h"
#include "player.h"
#include <iostream>
#include <cctype> 

using namespace std;

Game::Game(Console* console, GameState* game_state, Player* player_one, Player* player_two)
{
    this->console = console;
    this->game_state = game_state;
    this->player_one = player_one;
    this->player_two = player_two;
    this->current_player = player_one;
    this->other_player = player_two;
}

void Game::start()
{
    Board board;
    int game_counter = 0;
    while (game_state->current_state(current_player) == "in-progress" && game_state->current_state(other_player) == "in-progress")
    {
        game_counter++;
        cout << console->display();
        current_player->get_move();
        if (current_player->get_mark() == 'X')
        {
            current_player = player_two;
            other_player = player_one;
        }
        else
        {
            current_player = player_one;
            other_player = player_two;
        }
        
    }
      cout << game_state->current_state(current_player) << endl;
   
}
