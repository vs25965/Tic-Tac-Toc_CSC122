#pragma once

#include <vector>
using namespace std;
class WinningCombos
{
private:
    std::vector<std::vector<int>> winning_combos;

public:
    WinningCombos()
    {
        vector<int> combo_one = { 1, 2, 3 };
        winning_combos.push_back(combo_one);
        vector<int> combo_two = { 4, 5, 6 };
        winning_combos.push_back(combo_two);
        vector<int> combo_three = { 7, 8, 9 };
        winning_combos.push_back(combo_three);
        vector<int> combo_four = { 1, 4, 7 };
        winning_combos.push_back(combo_four);
        vector<int> combo_five = { 2, 5, 8 };
        winning_combos.push_back(combo_five);
        vector<int> combo_six = { 3, 6, 9 };
        winning_combos.push_back(combo_six);
        vector<int> combo_seven = { 1, 5, 9 };
        winning_combos.push_back(combo_seven);
        vector<int> combo_eight = { 3, 5, 7 };
        winning_combos.push_back(combo_eight);
 
    }

    WinningCombos(vector<int> additional_combo)
    {
        vector<int> combo_one = { 1, 2, 3 };
        winning_combos.push_back(combo_one);
        vector<int> combo_two = { 4, 5, 6 };
        winning_combos.push_back(combo_two);
        vector<int> combo_three = { 7, 8, 9 };
        winning_combos.push_back(combo_three);
        vector<int> combo_four = { 1, 4, 7 };
        winning_combos.push_back(combo_four);
        vector<int> combo_five = { 2, 5, 8 };
        winning_combos.push_back(combo_five);
        vector<int> combo_six = { 3, 6, 9 };
        winning_combos.push_back(combo_six);
        vector<int> combo_seven = { 1, 5, 9 };
        winning_combos.push_back(combo_seven);
        vector<int> combo_eight = { 3, 5, 7 };
        winning_combos.push_back(combo_eight);

        this->winning_combos.push_back(additional_combo);
    }

    vector<vector<int>> all()
    {
        return this->winning_combos;
    }
};