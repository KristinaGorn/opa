#include "Estate.h"
#include "Data.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


void Estate::load(std::ifstream& ist) {
	ist >> this->name;
	this->date.load(ist);
	ist >> this->topic;
}

void Estate::print(std::ostream& ost) {
	ost << this->name << " ";
	this->date.print(ost);
	ost << " ";
	ost << this->topic << endl;
}