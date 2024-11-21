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

    Validator validate(this->board);
    string promt = "Do you want to (1) enter a cell or (2) explode the board? ";
    int option = validate.two_int_validator(1,2,promt);
    if (option == 1)
    {
        cout << "\nSounds good! Enter a cell between 1 and 9 ";
        int move = validate.validator(1,9);
        this->board->move(move, this->mark);
    }
    else if (option == 2 && counter_X == 0 && this->get_mark() == 'X')
    {
        cout << "Exploding the board!" << endl;
        this->board->clear();
        counter_X ++;
    }
    else if (option == 2 && counter_O == 0 && this->get_mark() == 'O')
    {
        cout << "Exploding the board!" << endl;
        this->board->clear();
        counter_O ++;
    }
    else
    {
        cout << "\nOops! You already used your power.Turn for the other player.." << endl;
    }
}