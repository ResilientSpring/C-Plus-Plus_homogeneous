/*
Throwing an exception from a function called from within a try block.
*/

#include <iostream>
using namespace std;

void Xtest(int test) {

	cout << "Inside Xtest, test is: " << test << endl;

	if (test)
		throw test;
}


int main() {

	cout << "start\n";

	try
	{
		cout << "Inside try block\n";
		Xtest(0);
		Xtest(1); // Because Xtest() is called from within a try block, its code is also monitored for errors.
		Xtest(2);
	}
	catch (const std::exception &)
	{

	}

}