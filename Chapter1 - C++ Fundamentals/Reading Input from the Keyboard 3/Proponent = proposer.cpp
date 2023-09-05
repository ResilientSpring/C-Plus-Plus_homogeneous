#include <iostream>
using namespace std;

int main() {

	int length;  // this declares a variable
	int width;

	do
	{
		cout << "Enter the length: ";
		cin >> length;

	} while (cin.exceptions());

	do
	{
		cout << "Enter the width: ";
		cin >> width;

	} while (cin.fail());


	cout << "The area is " << length * width << endl;

}

// Reference: https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
