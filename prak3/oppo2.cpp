#include <iostream>
#include <clocale>
#include <string>
#include <fstream>
#include <vector>
#include "Estate.h"
using namespace std;

vector<Estate> loadestd(ifstream& ist) {
	vector<Estate> ests;
	Estate obj;
	while (!ist.eof()) {
		obj.load(ist);
		if (obj.date.mm == -1)
			break;
		ests.push_back(obj);
	}
	return ests;
}

void print_estates(vector<Estate>& ests) {
	for (int i = 0; i < ests.size(); i++) {
		ests.at(i).print(cout);
	}
}


int main() {
	ifstream ist("1.txt");
	vector<Estate> ests;
	ests = loadestd(ist);
	print_estates(ests);
}