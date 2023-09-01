// Use multiple catch statements.

#include <iostream>
using namespace std;

// Different types of exceptions can be caught.
void Xhandler(int test) {

	try
	{
		if (test) throw test;  // throw int
		else throw "Value is zero.";  // throw const char*
	}
	catch (int i)
	{
		cout << "Caught one! Ex. #: " << i << endl;
	}

}

int main() {



}