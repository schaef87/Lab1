/*
 * lexical.cpp
 *
 *  Created on: Feb 9, 2015
 *      Author: schaeferj
 */

// Idividual lab created by Justin Schaefer

#include "Text.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
	//Variables
	ifstream inFS;
	char* input;
	Text Token;

	//Open File
	inFS.open("progsamp.dat");
	if (!inFS.is_open()) {
		cout << "Could not open file." << endl;
		return 1; // 1 indicates error
	}

	while(inFS.eof()){
cin >> inFS.
	}
	inFS.close();

	return 0;
}
