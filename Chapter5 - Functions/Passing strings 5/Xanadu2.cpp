#include <iostream>
using namespace std;

int main() {
	char str[10];

	for (char letter = 'A'; letter < 'J'; letter++) {
		
		*str = letter;

		str++;      // Move on to next char.
	}






	cout << str << endl;
}