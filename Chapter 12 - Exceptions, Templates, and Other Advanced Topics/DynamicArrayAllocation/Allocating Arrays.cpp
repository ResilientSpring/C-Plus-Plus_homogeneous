// Allocate an array.

#include <iostream>
#include <new>
using namespace std;

int main() {

	int *p, i;


	try
	{
		p = new int[10]; // Dynamically allocate an array of 10 integers.
	}
	catch (bad_alloc xa)
	{
		cout << "Allocation Failure" << endl;

		return 1;
	}


	for (i = 0; i < 10; i++)
		p[i] = i;


	for (i = 0; i < 10; i++)
		cout << p[i] << " ";


	delete[] p;    // Release the array.

}