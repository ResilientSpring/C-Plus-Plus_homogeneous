/*

Project 2-2 

Create an XOR using the C++ logical operation 

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	bool p, q;

	p = true;
	q = true; 

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";

	p = false;
	q = true;

	cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";

}