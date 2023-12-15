#include "Data.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void Data::print(std::ostream& ost) {
	ost << this->dd << "/" << this->mm << "/" << this->yyyy;
}

void Data::load(std::ifstream& ist) {
	this->dd = -5;
	this->mm = -5;
	this->yyyy = -5;
	ist >> this -> dd;
	ist.get();
	ist >> this-> mm;
	ist.get();
	ist >> this-> yyyy;

	if (mm == -5 || dd == -5 || yyyy == -5)
	{
		cout << "ERROR. Nepravilno chtoto vvedeno! Suka" << endl;
		mm = -1;
	}
}