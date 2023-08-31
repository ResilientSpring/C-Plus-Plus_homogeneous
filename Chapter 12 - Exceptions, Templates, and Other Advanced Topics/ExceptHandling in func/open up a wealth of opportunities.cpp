/*
  A try block can reside in a function.
*/

#include <iostream>
using namespace std;

void Xhandler(int test) {

	try
	{
		if (test) throw test;
	}
	catch (int i)
	{
		cout << "Caught One! Ex. #: " << i << endl;
	}

}



int main() {



}