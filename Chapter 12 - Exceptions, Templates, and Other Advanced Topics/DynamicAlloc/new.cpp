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
		std::cout << "Allocation failure \n";
	}


	*p = 100;

	std::cout << "At " << p << " " << "is the value " << *p << "\n";

	delete p;


}