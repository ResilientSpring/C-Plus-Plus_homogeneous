#include <iostream>
using namespace std;

int main() {
	char str[10];

	char letter;
	int i;

	for (letter = 65, i = 0; letter <= 74, i < 10; letter++, i++) {

		*(str + i) = letter;
	}






	cout << str << endl;
}

/*
To declare two variables of different types in a for loop:

https://stackoverflow.com/a/2687408/
*/