// Use multiple catch statements.

#include <iostream>
using namespace std;

// Different types of exceptions can be caught.
void Xhandler(int test) {

	try
	{
		if (test) throw test;  // throw int
		else throw "Value is zero.";  // throw const char *
	}
	catch (int i)
	{
		cout << "Caught one! Ex. #: " << i << endl;
	}
	catch (char str[]) {

		cout << "Caught a string: " << str << endl;
	}

}

int main() {

	cout << "start\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);

	cout << "end";
}