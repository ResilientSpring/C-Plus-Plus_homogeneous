// Use an int value to control the if.

#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Enter numerator: ";
	cin >> a;
	cout << "Enter denominator: ";
	cin >> b;

	if (b)
	{
		cout << "Result: " << a / b << "\n";
	}
	else
	{
		cout << "Cannot divide by zero.\n";
	}

}