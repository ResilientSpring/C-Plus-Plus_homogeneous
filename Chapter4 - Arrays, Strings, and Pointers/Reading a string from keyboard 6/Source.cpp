// Using gets() to read a string from keyboard.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: " << endl;

	gets_s(str);


	/*  In this case, although I treated 
			
			gets_s() 
			
			as if it were 
			
			gets()


	, I have no idea about which requirement did gets_s(str) meet,

			char* gets_s(char *buffer, rsize_t size)

			or

			char* gets_s( char (&_Buffer)[_Size])

			?		
	
	*/

}