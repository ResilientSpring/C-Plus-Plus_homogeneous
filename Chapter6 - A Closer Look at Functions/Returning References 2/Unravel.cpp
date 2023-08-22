// Return a reference to an array element.

#include <iostream>
using namespace std;


double values[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };


int main() {

	int i;

	cout << "Here are the original values: ";

	for (i = 0; i < 5; i++)
		cout << values[i] << ' ';

}