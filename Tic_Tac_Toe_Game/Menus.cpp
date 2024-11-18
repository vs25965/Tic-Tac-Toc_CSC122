#include "Menus.h"
#include <iostream>

using namespace std;
int Menus::main_menu()
{
	cout << "\nDo you want to play regular (1) or battle (2) tic-tac-toe" << endl;
	cin >> main_choice;
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


	cout << "\nIf both players want the archetype pyromancer enter (2)" << endl;
	cout << "\nIf both players want the archetype swarm enter (3)" << endl;
	cout << "\nIf player one wants Swarm and second player wants be pyromancer enter (4)" << endl;
	cout << "\nIf player one wants pyromancer and second player wants be  Swarm enter (5)" << endl;
	int battle_menu;
	cin >> battle_menu;

	return battle_menu;

}