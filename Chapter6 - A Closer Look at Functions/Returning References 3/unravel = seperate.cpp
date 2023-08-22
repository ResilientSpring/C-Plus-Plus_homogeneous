// Return a pointer to an array element.
// The pointer version of <Returning References 2>

#include <iostream>
using namespace std;

double values[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

int main() {

	cout << "Here are the original values: ";

	for (int i = 0; i < 5; i++)
		cout << values[i] << ' ';
}

double* change_it(int i) {

	return values + i;
}
