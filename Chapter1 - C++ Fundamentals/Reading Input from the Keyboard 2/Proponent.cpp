#include <iostream>
using namespace std;

int main() {

	int length;  // this declares a variable
	int width;

	try
	{

		cout << "Enter the length: ";
		cin >> length;

		cout << "Enter the width: ";
		cin >> width;

	}
	catch (const std::exception &)
	{

	}

}