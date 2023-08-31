// A simple exception handling example.

#include <iostream>
using namespace std;

int main() {

	cout << "start\n";

	// Program statements that you want to monitor for exceptions are contained in a try block.
	try
	{
		cout << "Inside try block\n";
		throw 99;  // throw an error.
		cout << "This will not execute.";

	}  // If an exception (that is, an error) occurs within the try block, it is thrown (using throw).
	// The error is caught, using catch, and then processed.
	catch (double i)  // Won't work for an int exception.
	{
		cout << "Caught an exception -- value is: " << i << endl;
	}

	cout << "end";
}