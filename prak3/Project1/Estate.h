#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Data.h"
using namespace std;
class Estate
{
public:
	string name;
	string topic;
	Data date;
	void load(std::ifstream& ist);
	void print(std::ostream& ost);
};
