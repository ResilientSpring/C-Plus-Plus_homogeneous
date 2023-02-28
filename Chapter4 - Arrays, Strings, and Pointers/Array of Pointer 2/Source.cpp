#include <iostream>
using namespace std;

int main() {
	int integers[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };

	// Declare an array of pointers of type integer.
	int* integer_pointers[] = { &integers[0], &integers[1], &integers[2] };


	cout << integer_pointers;



	cout << endl << endl;


	for (int i = 0; i < sizeof(integer_pointers) / sizeof(integer_pointers[1]); i++)

		cout << integer_pointers[i] << " ";


	// To find the value of the address.
	cout << "\n" << endl << *integer_pointers[0];

}