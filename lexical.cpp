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
	ifstream myFile;
	Text token;

	//Open File
	myFile.open("progsamp.dat");
	if (myFile.is_open()) {
		cout << "File opened successfully" << endl;
		while(!myFile.eof()){
			myFile >> token;
			cout << token.getLetters() << endl;
		}
	} else {
		cout << "File did not open" << endl;
	}
	myFile.close();
	getchar();
	return 0;
}
