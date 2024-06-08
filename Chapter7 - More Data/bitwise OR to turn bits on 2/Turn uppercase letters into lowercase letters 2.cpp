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
		// 0100 0001 OR 0110 0001
		ch = ch | 97;

		/*
			0100 0001
		 OR	0110 0001
		------------------
			0110 0001

		*/

		/*
		  
		   0100 0010  B
		OR 0110 0001
		----------------------
		   0110 0010  b

		*/

		/*
		   For 0100 0011 to add 32
		   
		   0100 0011  C
		OR 0010 0000
		------------------
		   0110 0011  c  (C plus 32)

		*/

	    /*  Although adding 0110 0011 works as well, it only works for the conversion from C to c. 
		   
		   0100 0011  C
		OR 0110 0011
		------------------
		   0110 0011  c  (C plus 32)

		*/

		ch = ch | 32;

		cout << ch << " ";
	}

	cout << "\n";

}