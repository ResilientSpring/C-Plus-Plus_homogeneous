#include <iostream>
using namespace std;

int main() {

	int x = 10, *p = &x, **q = &p;

	cout << **q << endl;
}

// Review the section Dynamic Initialization in Chapter 2.