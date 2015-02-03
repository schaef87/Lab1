#include "Text.h"
#include <iostream>

using namespace std;

Text::Text(const char* charSeq = ""){
	bufferSize = strlen(charSeq) + 1;
	buffer = new char[bufferSize];
}

Text::Text(const Text& other){
	bufferSize = strlen(other) + 1;
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
cout << buffer;
}

Text::toUpper(const Text& other){
	bufferSize = strlen(Text) + 1;
	buffer = new char[bufferSize];

	int x = 0;
	while(bufferSize[x]){
		if(buffer[x] > 96 && buffer[x] < 123){
			buffer[x] = buffer[x] - 32;
			x++;
		} else {
			x++;
		} //End of IF
	}  //End of WHILE

}

Text::toLower(){
	bufferSize = strlen(Text) + 1;
	buffer = new char[bufferSize];

	int x = 0;
	while(bufferSize[x]){
		if(buffer[x] > 64 && buffer[x] < 91){
			buffer[x] = buffer[x] + 32;
			x++;
		} else {
			x++;
		} //End of IF
	}  //End of WHILE

}
