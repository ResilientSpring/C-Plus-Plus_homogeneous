// Using gets() to read a string from keyboard.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: " << endl;

	gets_s(str, 80);


	/*  gets_s(str, 80) passed the compiler as I had expected because I had thought it fufill
	    
		char* gets_s(char *buffer, rsize_t size)

		prompted by Visual Studio.
	
	*/

}