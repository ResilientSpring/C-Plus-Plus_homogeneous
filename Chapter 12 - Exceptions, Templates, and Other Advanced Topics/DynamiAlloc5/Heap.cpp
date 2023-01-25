// Demonstrate new and delete.

#include <iostream>
#include <new>

int main() {

	int* p;

	p = new int;

	if (!p)
	{
		std::cout << "Allocation failure \n";
	}

	*p = 100;

	std::cout << "At " << p << " " << "is the value " << *p << "\n";

	delete p;


}