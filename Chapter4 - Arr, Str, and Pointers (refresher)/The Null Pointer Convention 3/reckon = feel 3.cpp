#include <iostream>
using namespace std;

int main() {

	float *p = NULL;

	if (!p) {
		cout << "p is null" << endl;
	}

	if (p) {

		cout << "p is not null" << endl;
	}

}