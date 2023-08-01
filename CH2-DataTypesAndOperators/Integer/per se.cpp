#include <iostream>
using namespace std;

/* This program shows the difference between signed and unsigned integers.*/

int main() {

	short int i; // a signed short integer

	short unsigned int j;  // an unsigned short integer.

	// 60000 is within the range of an unsigned short int, but is typically outside the range of a signed short int.
	j = 60000;  

	// Thus, it will be interpreted as a negative value when assigned to i.
	i = j; 

	cout << i << " " << j;

}