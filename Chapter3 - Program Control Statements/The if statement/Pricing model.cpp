// Magic Number program.

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
		cout << "**Right**";
	}
	else
	{
		cout << "...Sorry, you are wrong.";
	}

}