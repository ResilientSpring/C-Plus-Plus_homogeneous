#include <iostream>
using namespace std;

int main() {

	// Any type of pointer can be initialized to null when it is declared. 
	
	float *p;

	p = 0;


	if (!p) {

		cout << "p is null" << endl;
	}


	if (p) {

		cout << "p is not null" << endl;

	}
}