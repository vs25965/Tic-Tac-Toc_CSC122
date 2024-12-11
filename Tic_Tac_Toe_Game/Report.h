#pragma once
#include <fstream>
#include <iostream>
#include "ManagerReport.h"

using namespace std;

class Report
{
public:
	void openFile();
	void writeReport(ManagerReport& managerReport);
	void closeFile();
	
private:
	fstream myfile;
};

