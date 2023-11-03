#include <iostream>
using namespace std;

int main() {

	cout << "The size of a variable of an int: " << sizeof(int) << " byte(s)." << endl;
	cout << "The size of a variable of a char: " << sizeof(char) << " byte(s)." << endl;
	cout << "The size of a variable of a float: " << sizeof(float) << " byte(s)." << endl;

	int i = 123;
	char ch;
	float f = 3.6;
	double d = 9.7;


	// In an assignment statement, the right-side value is converted to the type of the left-size variable.

	ch = i; // line 1  High-order bits of the int variable i are lopped off, leaving ch with the lower 8 bits.
			//         
			//         If i were between -128 and +127, ch and i would have identical values.
			//
			//         Otherwise, the value of ch would reflect only the lower-order bits of x.


	i = f;  // line 2  i will receive only the non-fractional part of f.  
	f = ch; // line 3  f will convert the 8-bit int value stored in ch to the same value in float-point format.
	cout << "f is " << f << endl;
	f = i;  // line 4  What happens in line 3 also happens in line 4, except f will convert an int to float-point format.

	d = i;

	cout << "i is " << i << endl;
	cout << "ch is " << ch << endl;
	cout << "f is " << f << endl;
	cout << "d is " << d << endl;

}