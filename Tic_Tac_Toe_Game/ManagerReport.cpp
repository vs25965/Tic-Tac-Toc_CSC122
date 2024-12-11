#include "ManagerReport.h"

int ManagerReport::gamesPlay()
{
	return ++gamesPlayed;
}
int ManagerReport::playerXwins()
{
	return ++Xwins;
}
int ManagerReport::playerYwins()
{
	return ++Ywins;
}
int ManagerReport::Ties()
{
	return ++ties;
}
void ManagerReport::restoreReport()
{
	gamesPlayed = 0;
	Xwins = 0;
	Ywins = 0;
	ties = 0;
}
int ManagerReport::getGamesplayed()
{
	return gamesPlayed;
}
int ManagerReport::getXwins()
{
	return Xwins;
}
int ManagerReport::getYwins()
{
	return Ywins;
}
int ManagerReport::getTies()
{
	return ties;
}
void ManagerReport::updateResult(const std::string& result)
{
	if (result == "X wins")
	{
		playerXwins();
	}
	else if (result == "O wins")
	{
		playerYwins();
	}
	else if (result == "It's a draw")
	{
		Ties();
	}
}