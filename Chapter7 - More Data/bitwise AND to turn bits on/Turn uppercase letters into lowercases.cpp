#include <iostream>
using namespace std;

int main() {

	char ch;

	for (int i = 0; i < 10; i++)
	{
		//   65  + 0
		ch = 'A' + i;
		cout << ch;

		//   65 
		// 0100 0001 & 1101 1111
		ch = ch & 223;

		/*
			0100 0001
		 &	0100 0001
		------------------
			0110 0001

		*/


		cout << ch << " ";
	}

	cout << "\n";

}