#define ADD(x) x*x

#include <iostream>
using namespace std;

int main() {

	int // a = 4,
		// b = 6,
		// c = 7,
		// d = ADD(a + b) * c;
		d = ADD(4 + 6) * 7;        //  4 + 6 * 4 + 6 * 7
	                               

	printf("d = %d", d);

}