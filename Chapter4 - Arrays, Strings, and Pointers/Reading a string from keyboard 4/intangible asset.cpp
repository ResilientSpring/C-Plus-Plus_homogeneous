// Using gets() to read a string from keyboard.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: " << endl;

	gets_s(str[80]);

	/* Why did 
	* 
	*		gets_s(str[80])
	* 
	* fail to pass the compiler?
	* 
	* 
	* I thought it did meet the requirement of char* gets_s( char (&_Buffer)[_Size])
	* prompted by Visual Studio. 
	* 
	* 
	*/
}