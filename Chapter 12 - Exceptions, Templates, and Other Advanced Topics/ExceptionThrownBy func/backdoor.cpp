/*
Throwing an exception from a function called from within a try block.
*/

#include <iostream>
using namespace std;

void Xtest(int test) {

	cout << "Inside Xtest, test is: " << test << endl;

	if (test)
		throw test;  // This thrown exception is caught by the catch statement in main().
}


int main() {

	cout << "start\n";

	// Program statements that you want to monitor for errors are contained in a try block.
	try
	{
		cout << "Inside try block\n";
		Xtest(0);
		Xtest(1); // Because Xtest() is called from within a try block, its code is also monitored for errors.
		Xtest(2);
	}
	catch (int i)
	{
		cout << "Caught an exception -- value is: " << i << endl;
	}

}