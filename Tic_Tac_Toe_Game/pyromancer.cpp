#include <iostream>
#include <vector>
#include "pyromancer.h"

using namespace std;

Pyromancer::Pyromancer(Board* board, char mark) {
    this->board = board;
    this->mark = mark;
    this->combos = WinningCombos();
}
char Pyromancer::get_mark()
{
    return this->mark;
}

WinningCombos Pyromancer::get_winning_combos()
{
    return this->combos;
}

void Pyromancer::get_move()
{
    // We need to validate this move!
    // Oops! Shall We Try Again lab

    int option;
    cout << "Do you want to (1) enter a cell or (2) explode the board?" << endl;
    cin >> option;
    if (option == 1)
    {
        cout << "Sounds good! Enter a cell between 1 and 9." << endl;
        int move;
        cin >> move;
        this->board->move(move, this->mark);
    }
    else if (option == 2 && counter == 0)
    {
        cout << "Exploding the board!" << endl;
        this->board->clear();
        counter++;
    }
    else
    {
        cout << "\nOops! You already used your power." << endl;
    }
}