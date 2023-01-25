// Demonstrate new and delete.

#include <iostream>
#include <new>

int main() {

	int* p = new int(100);

	if (!p)
	{
		std::cout << "Allocation failure \n";
	}

	std::cout << "At " << p << " " << "is the value " << *p << "\n";

	delete p;


}

// Reference: https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
