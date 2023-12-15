#include "Estate.h"
#include "Data.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



void Estate::load(std::ifstream& ist) {


	ist >> this->name;

	ist >> this->topic;

	this->date.load(ist);

}

void Estate::print(std::ostream& ost) {
	ost << this->name << " ";
	ost << this->topic;
	ost << " ";
	this->date.print(ost);
	ost << endl;
	
}
