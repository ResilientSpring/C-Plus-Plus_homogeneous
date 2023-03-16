// Using gets() to read a string from keyboard.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char str[80];

	cout << "Enter a string: ";

	gets_s(str);    // read a string using gets_s(), meaning "get string" securely().    

	cout << "Here is your string: " << str << endl;

}
