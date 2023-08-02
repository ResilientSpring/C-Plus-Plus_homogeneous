#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int magic;  // magic number
	int guess;  // user's guess

	magic = rand();

	cout << "Enter your guess: ";
	cin >> guess;

	if (guess == magic)
	{
		cout << "**Right**\n";
		cout << magic << " is the magic number.\n";
	}
	else
	{
		cout << "...Sorry, you are wrong.";

		// Here, a nested if provides feedback to the player.
		if (guess > magic) cout << "Your guess is too high.\n";
		else cout << "Your guess is too low. \n";

	}

}