#include <iostream>
using namespace std;

int main() {

	cout << "The size of a variable of int: " << sizeof(int) << endl;
	cout << "The size of a variable of char: " << sizeof(char) << endl;

	int i;
	char ch;
	float f;

	ch = i;   // line 1    The high-order bits of the integer variable i are lopped off.
	i = f;    // line 2
	f = ch;   // line 3
	f = i;    // line 4

}