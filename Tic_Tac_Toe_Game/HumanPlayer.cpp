#include <iostream>
#include "HumanPlayer.h"
#include "Validator.h"

using namespace std;


HumanPlayer::HumanPlayer(Board* board, char mark)
{
	this->board = board;
	this->mark = mark;
	this->combos = WinningCombos();
}
char HumanPlayer::get_mark()
{
	return this->mark;
}

WinningCombos HumanPlayer::get_winning_combos()
{
	return this->combos;
}
void HumanPlayer::get_move()
{
	    Validator validate(this->board);
		int valid_move = validate.validator(1, 9);

	this->board->move(valid_move, this->mark);
	
}
