#include <iostream>
using namespace std;

int main() {
	char str[10];

	char letter;
	int i;

	for (letter = 'A', i = 0; letter <= 'J', i <= 9; letter++, i++) {

		*(str + i) = letter;
	}






	cout << str << endl;
}

/*
To declare two variables of different types in a for loop:

https://stackoverflow.com/a/2687408/
*/