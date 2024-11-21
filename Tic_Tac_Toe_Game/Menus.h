#include "Board.h"
#include "Validator.h"
#pragma once
class Menus {
private:
    Validator validate; // Declare a Validator object
    int main_choice;

public:
    Menus(Board* board) : validate(board) {} // Constructor to initialize Validator
    int main_menu();
    int battle_menu();
};
