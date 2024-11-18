#include <iostream>
#include "HumanPlayer.h"
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
	int move;
	bool check = false;

	while (!check)
	{
		cout << "What is your move? ";
		cin >> move;
		
		if (move < 1 || move > 9 || (cin.fail() || cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You enter an invalid move! Try again" << endl;
			check = false;
			
		}
		 else if (this->board->get_mark(move) == 'X' || this->board->get_mark(move) == 'O')
		{
			cout << "Spot is already taken! Try again" << endl;
			check = false;
		}
		else
		{
			check = true;
			
		}


	}

	this->board->move(move, this->mark);
	
}
