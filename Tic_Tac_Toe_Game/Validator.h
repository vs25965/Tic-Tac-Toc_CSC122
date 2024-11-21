#pragma once
#include <iostream>
#include <string>
#include "Board.h"
using namespace std;
class Validator
{
public: 
	Board* board; // Pointer to Board
	Validator(Board* board); // Constructor
	int validator(int, int);
	int two_int_validator(int, int, string);
	string main_validator(string , string );

};

