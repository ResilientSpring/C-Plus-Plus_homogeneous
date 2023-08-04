/*
	A simple proverb generator that demonstrates the switch.

*/

#include <iostream>
using namespace std;

int main() {

	int number;

	cout << "Enter a number from 1 to 3: ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "A rolling stone gathers no moss. \n";
		break;
	case 2:
		cout << "A bird in the hand is worth two in the bush. \n";
		break;
	case 3:
		cout << "A fool and his money are soon parted. \n";
		break;
	default:
		cout << "You must enter a number between 1 and 3, inclusive. \n";
		cout << "You must enter either 1, 2, or 3. \n";
		break;
	}

}