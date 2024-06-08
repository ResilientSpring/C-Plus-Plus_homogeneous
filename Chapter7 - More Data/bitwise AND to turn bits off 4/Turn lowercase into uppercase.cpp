#include <iostream>
using namespace std;

int main() {

	char ch;

	for (int i = 0; i < 10; i++)
	{
		//   97  + 0
		ch = 'a' + i;
		cout << ch;

		//   97 
		// 0110 0001 & 1101 1111
		ch = ch & 223;

		/*
			0110 0001
		  &	1101 1111
		------------------
			0100 0001

		*/


		cout << ch << " ";
	}

	cout << "\n";

}