#include <iostream>
using namespace std;

union u_type {

	short int i;
	char ch[2];

};


int main() {

	u_type u;
	u.i = 25957;

	// Figure 9-1 shows how i and ch both share the same address.
	cout << "u as integer: " << u.i << "\n";
	cout << "ch[0]: " << u.ch[0] << endl;
	cout << "ch[1]: " << u.ch[1] << endl;
}

/*
*  In Windows Calculator's  Programmer Mode; under WORD, and Bit Toggling Keyboard, 
*  
*  the bit pattern for 25957 is 0110 0101 0110 0101
 
   while

   the bit pattern for 101   is 0000 0000 0110 0101

                                  ch[1]     ch[0]

   This is why printing ch[1] yielded nothing when i = 101. (In ASCII, decimal 0 means null.)
*/