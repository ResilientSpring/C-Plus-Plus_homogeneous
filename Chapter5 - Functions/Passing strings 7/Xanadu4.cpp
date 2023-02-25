#include <iostream>
using namespace std;

int main() {
	char str[10];

	for (char letter = 'A', int i = 0; letter < 'J', i < 10; ++letter, ++i) {

		*(str + i) = letter;
	}






	cout << str << endl;
}