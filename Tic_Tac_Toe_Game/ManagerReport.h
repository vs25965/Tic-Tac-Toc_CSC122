#pragma once
#include <string>
using namespace std;
class ManagerReport
{
public :

	int gamesPlay();
	int playerXwins();
	int playerYwins();
	int Ties();
	void restoreReport();
	int getGamesplayed();
	int getXwins();
	int getYwins();
	int getTies();
	void updateResult(const string& result);
private:
	int gamesPlayed = 0;
	int Xwins = 0;
	int Ywins = 0;
	int ties = 0;

};

