#include "Report.h"
void Report::openFile()
{
	myfile.open("Game_Report.txt", ios::out);
    if (!myfile.is_open()) {
        cerr << "Unable to open file." << endl;
    }
}
void Report::writeReport(ManagerReport& managerReport)
{
    if (myfile.is_open()) {
        myfile << "\n\t ***Game report***" << endl;
        myfile << "Games Played: " << managerReport.getGamesplayed() << endl;
        myfile << "Player X Wins: " << managerReport.getXwins() << endl;
        myfile << "Player Y Wins: " << managerReport.getYwins() << endl;
        myfile << "Ties: " << managerReport.getTies() << endl;
    }
    else {
        cerr << "File is not open." << endl;
    }
}
void Report::closeFile()
{
    if (myfile.is_open()) {
        myfile.close();
    }
}