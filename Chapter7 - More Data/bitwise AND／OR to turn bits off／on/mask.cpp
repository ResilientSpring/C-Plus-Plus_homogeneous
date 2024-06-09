#include <iostream>
using namespace std;

int main() {

	char ch;

	for (int i = 0; i < 10; i++)
	{
		ch = 'a' + i;
		cout << ch;

		// 0110 0001 & 1101 1111
		ch = ch & 223;

		/*
			0110 0001
		  &	1101 1111         (It's like a subnet mask) Just select the targeted bit to be 0.
		------------------
			0100 0001

		*/


		cout << ch << " ";
	}

	cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		//   65  + 0
		ch = 'A' + i;
		cout << ch;

		//   65 
		// 0100 0001 OR 0010 0000
		ch = ch | 32;

		/*
			0100 0001
		 OR	0010 0000          (It's like a subnet mask) Just select the bit you want to add to be 1.
		------------------
			0110 0001

		*/


		cout << ch << " ";
	}

	cout << "\n";

}