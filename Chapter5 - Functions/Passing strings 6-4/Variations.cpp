#include <iostream>
using namespace std;

int main() {
	char str[10];

	for (int i = 0; i < 10; i++) {

		for (char letter = 'A', letter < 'J'; letter++) {

			*(str + i) = letter;

		}

	}






	cout << str << endl;
}