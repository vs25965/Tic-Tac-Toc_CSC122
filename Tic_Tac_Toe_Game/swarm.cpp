#include <iostream>
#include <vector>

#include "swarm.h"
using namespace std;

swarm::swarm(Board* board, char mark)
{
	this->board = board;
	this->mark = mark;

	vector<int> additional_win = { 1, 3, 7, 9 };
	this->combos = WinningCombos(additional_win);
}

char swarm::get_mark()
{
	return this->mark;
}

WinningCombos swarm::get_winning_combos()
{
	return this->combos;
}

void swarm::get_move()
{
	// We need to validate this move!
	// Oops! Shall We Try Again lab
	int move;
	cout << "What is your move? ";
	cin >> move;
	this->board->move(move, this->mark);
}