#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Data
{
public:
	int dd, mm, yyyy;
	void load(std::ifstream& ist);
	void print(std::ostream& ost);
};
