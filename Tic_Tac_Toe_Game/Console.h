#pragma once

#include <string>
#include "Board.h"

using namespace std;

class Console
{
private:
	Board* board;
	string vertical_separator = " | ";
	string horizontal_separator = " \n-----------\n ";
	string padding = " ";

public:
	Console(Board* board);
	string display();
};

