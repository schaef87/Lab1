#include "Text.h"
#include <iostream>

using namespace std;

Text::Text(const char* charSeq = ""){
	bufferSize = strlen(charSeq) + 1;
	buffer = new char[bufferSize];
}

Text::Text(const Text& other){
	bufferSize = strlen(Text) + 1;
	buffer = new char[bufferSize];

	other = buffer;
}

Text::getLength(){
	return bufferSize;
}

Text::clear(){
	buffer = "";
}

Text::showStructure(){

}

Text::toUpper(const Text& other){
	bufferSize = strlen(Text) + 1;
	buffer = new char[bufferSize];

	int x = 0;
	while(x < bufferSize){
		if(charSeq > 96){
			buffer[x] = buffer[x] - 32;
			x++
		} else {
			x++
		}
	}

}

Text::toLower(){

}
