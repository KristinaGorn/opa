#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Data
{
public:
	int dd = 0, mm = 0, yyyy = 0;
	void load(std::ifstream& ist);
	void print(std::ostream& ost);
};
