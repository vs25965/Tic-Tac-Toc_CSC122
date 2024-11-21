#include "GameState.h"
using namespace std;

GameState::GameState(Board* board)
{
    this->board = board;
}

bool GameState::winning_combo(vector<int> combo)
{
    if (combo.size() == 3)
    {
        return board->get_mark(combo.at(0)) == board->get_mark(combo.at(1)) && board->get_mark(combo.at(1)) == board->get_mark(combo.at(2));
    }
    else
    {
        return board->get_mark(combo.at(0)) == board->get_mark(combo.at(1)) &&
            board->get_mark(combo.at(1)) == board->get_mark(combo.at(2)) &&
            board->get_mark(combo.at(2)) == board->get_mark(combo.at(3));
    }
}

string GameState::select_winner(int cell)
{
    string output = "";
    output += board->get_mark(cell);
    output += " wins";
    return output;
}
string GameState::current_state(Player* current_player)
{
    vector<vector<int>> combos = current_player->get_winning_combos().all();
    vector<vector<int>>::iterator combo_iterator;

    for (combo_iterator = combos.begin(); combo_iterator != combos.end(); combo_iterator++)
    {
        if (this->winning_combo(*combo_iterator))
        {
            return select_winner(combo_iterator->at(0));
        }
    }
    if (board->full_board()) {
        return "It's a draw"; // Return draw if the board is full
    }
    return "in-progress";
}


