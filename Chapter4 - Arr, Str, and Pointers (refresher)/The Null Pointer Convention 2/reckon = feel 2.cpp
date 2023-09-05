#include <iostream>
using namespace std;

int main() {

	
	float *p;

	p = 0;   // 0 as memory address.


	if (!p) {

		cout << "p is null" << endl;
	}


	if (p) {

		cout << "p is not null" << endl;

	}
}