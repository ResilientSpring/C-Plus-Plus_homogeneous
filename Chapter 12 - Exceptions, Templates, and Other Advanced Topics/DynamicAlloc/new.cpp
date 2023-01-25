// Demonstrate new and delete.

#include <iostream>
#include <new>

int main() {

	int* p;

	try
	{
		p = new int;  // Dynamically allocates heaps to hold an integer.
	}
	catch (std::bad_alloc xa)
	{

	}
}