#include <iostream>
using namespace std;

int main() {

	// define anonymous union
	union
	{
		long l;
		double d;
		char s[4];
	};

	l = 100000;

}