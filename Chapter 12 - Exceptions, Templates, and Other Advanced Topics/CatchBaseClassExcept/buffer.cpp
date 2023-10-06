// Catching derived classes. This program was wrong!
#include <iostream>
using namespace std;

class B {

};

class D : B {

};

int main() {

	D derived;

	try
	{
		throw derived;
	}
	catch (B b)
	{

	}
}