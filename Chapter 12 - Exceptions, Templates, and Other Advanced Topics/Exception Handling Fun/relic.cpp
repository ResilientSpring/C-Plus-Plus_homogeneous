// A simple exception handling example.

#include <iostream>
using namespace std;

int main() {

	cout << "start\n";

	// Program statements that you want to monitor for exceptions are contained in a try block.
	try
	{

	}  // If an exception (that is, an error) occurs within the try block, it is thrown (using throw).
	// The error is caught, using catch, and then processed.
	catch (const std::exception &)
	{

	}

}