/* ***USE ZYBOOK 5.15 FOR C STRING SYNTAX INFORMATION*** */

#include "Text.h"
#include <iostream>
#include <cstring>

using namespace std;

Text::Text (const char* charSeq){
	bufferSize = strlen((charSeq) + 1);
	buffer = new char[bufferSize];
	strcpy(buffer, charSeq);
}

Text::Text (const Text& other){
	bufferSize = other.getLength();
	buffer = new char[bufferSize];
	strcpy(buffer, other.getLetters());
}

int Text::getLength()const{
	return bufferSize;
}

char* Text::getLetters()const{
	return buffer;
}

void Text::clear(){
	buffer[0] = '\0';
}

Text::~Text(){
	delete buffer;
}

void Text::showStructure()const{
cout << buffer << endl;
}

//    FIX THIS INEFFICIENT GARBAGE - I.e. I love you man
//Text::toUpper(const Text& other){
//	bufferSize = strlen(Text) + 1;
//	buffer = new char[bufferSize];
//
//	int x = 0;
//	while(bufferSize[x]){
//		if(buffer[x] > 96 && buffer[x] < 123){
//			buffer[x] = buffer[x] - 32;
//			x++;
//		} else {
//			x++;
//		} //End of IF
//	}  //End of WHILE
//
//}
//
//Text::toLower(){
//	bufferSize = strlen(Text) + 1;
//	buffer = new char[bufferSize];
//
//	int x = 0;
//	while(bufferSize[x]){
//		if(buffer[x] > 64 && buffer[x] < 91){
//			buffer[x] = buffer[x] + 32;
//			x++;
//		} else {
//			x++;
//		} //End of IF
//	}  //End of WHILE
//
//}
