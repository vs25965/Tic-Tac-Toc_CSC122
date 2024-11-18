#pragma once

#include "winning_combos.h"

class Player
{
public:
	virtual void get_move() = 0;
	virtual char get_mark() = 0;
	virtual WinningCombos get_winning_combos() = 0;
};