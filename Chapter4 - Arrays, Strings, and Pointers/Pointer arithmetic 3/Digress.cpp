#include <iostream>
using namespace std;

int main() {
	int array_of_integers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int *p1;

	p1 = array_of_integers;

	cout << *p1 << endl;

	p1 = p1 + 9;

	cout << *p1;
}