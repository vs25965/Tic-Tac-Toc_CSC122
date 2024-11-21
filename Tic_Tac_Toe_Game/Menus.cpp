#include "Menus.h"

#include <iostream>

using namespace std;

int Menus::main_menu()
{
	string promt = "\nDo you want to play regular (1) or battle (2) tic-tac-toe\n";
	main_choice = validate.two_int_validator(1,2, promt);


	if (main_choice == 1)
	{
		return 1;
	}
	else
	{
		int return_battle_choice;
		return_battle_choice = battle_menu();
		return  return_battle_choice;
	}

}
int Menus::battle_menu()
{
	cout << "\nWelcome to battle Tic-tac-toe\nThis are the possible archetypes:" << endl;
	cout << "\n--->Swarm: Allows you to win by filling in all four corners of the board " << endl;
	cout << "\n--->Pyromancer: Allows you to destroy all of the current marks on the board and start over" << endl;
	cout << "\n\t**You can only implement your archetype ONCE per game** " << endl;
	cout << "\n\t**if you try to implement it a second time, you WILL LOSE your turn!!** " << endl;


	cout << "\nIf both players want the archetype pyromancer enter (2)" << endl;
	cout << "\nIf both players want the archetype swarm enter (3)" << endl;
	cout << "\nIf player one wants Swarm and second player wants be pyromancer enter (4)" << endl;
	cout << "\nIf player one wants pyromancer and second player wants be  Swarm enter (5)" << endl;
	string promt1 = "\nNumber between 2-5\n";
	 int battle_menu = validate.two_int_validator(2, 5, promt1);
	return battle_menu;

}