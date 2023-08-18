// Magic Number program: 3rd improvement.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int magic;
	int guess;

	magic = rand();

	do
	{
		cout << "Enter your guess: ";
		cin >> guess;

		if (guess == magic) {

			cout << " ** Right ** ";

			cout << magic << " is the magic number.\n";
		}
		else
		{
			cout << "...Sorry, you're wrong.";

			if (guess > magic)
				cout << " Your guess is too high.\n";
			else
				cout << " You guess is too low.\n";
		}

	} while (guess != magic);

}