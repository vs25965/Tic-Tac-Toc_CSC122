#include "Validator.h"
#include <cctype>

Validator::Validator(Board* board) {
	this->board = board;
}

int Validator::validator( int lowerBound, int upperBound)
{
	bool check = false;
	int move;
	

	while (!check)
	{
		cout << "What is your move? ";
		cin >> move;

		if ((move < lowerBound || move > upperBound) || (cin.fail() || cin.peek() != '\n'))
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
	
	return move;
}
int Validator::two_int_validator(int lowerBound, int upperBound, string promt)
{
	bool check = false;
	int move;

	while (!check)
	{
		cout << promt;
		cin >> move;

		if ((move < lowerBound || move > upperBound) || (cin.fail() || cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You enter an invalid move! Try again" << endl;
			check = false;

		}
		else
		{
			check = true;

		}


	}

	return move;
}

string Validator::main_validator(string option1, string option2)
{
	bool check = false;
	string decision;

	while (!check)
	{
		cout << "\nChoice: ";
		cin >> decision;

		for (char& c : decision)
		{
			c = tolower(c);
		}

		if (decision != option1 && decision != option2 || (cin.fail() || cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You enter an invalid option! Try again" << endl;

		}
		else
		{
			check = true;

		}


	}

	return decision;

}