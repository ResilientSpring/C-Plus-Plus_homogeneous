// A simple exception handling example.

#include <iostream>
using namespace std;

int main() {

	cout << "start\n";

	
	try
	{
		cout << "Inside try block\n";
		throw 99;  // throw an error.
		cout << "This will not execute.";

	}  	
	catch (double i)  // Won't work for an int exception.
	{
		cout << "Caught an exception -- value is: " << i << endl;
	}

	cout << "end";
}