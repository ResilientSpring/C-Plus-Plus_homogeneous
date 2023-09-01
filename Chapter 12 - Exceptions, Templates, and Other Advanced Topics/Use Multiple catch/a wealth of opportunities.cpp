// Use multiple catch statements.

#include <iostream>
using namespace std;

// Different types of exceptions can be caught.
void Xhandler(int test) {

	try
	{
		if (test) throw test;  // throw int
	}
	catch (const std::exception &)
	{

	}

}

int main() {



}