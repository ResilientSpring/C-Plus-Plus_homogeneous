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

	}


}