#pragma once

#include <array>
using namespace std;
class Board
{
private:
	array<char, 9> moves = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

public:
	void clear();
	void move(int i, char m);
	char get_mark(int i);
	bool full_board();
};

