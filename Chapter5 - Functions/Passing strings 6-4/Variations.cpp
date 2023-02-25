#include <iostream>
using namespace std;

int main() {
	char str[10];

	char letter = 65;

	for (int i = 0; i < 10; i++) {

		for (; letter <= 74; letter++) {

			*(str + i) = letter;

		}

	}






	cout << str << endl;
}