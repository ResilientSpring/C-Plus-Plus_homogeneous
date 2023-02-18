// Overload a function three times. 

#include <iostream>
using namespace std;

void f(int i);                // One integer parameter
void f(int i, int j);         // Two integer parameters
void f(double k);             // One double parameter


int main() {

	f(10);                // call f(int)

	f(10, 20);            // call f(int, int)

	f(12.23);             // call f(double)

}

// To overload a function, the type and/or number of parameters of each overloaded function must differ. 

void f(int i) {
	cout << "In f(int), i is " << i << "\n";
}

void f(int i, int j) {
	cout << "In f(int, int), j is " << j;
	cout << ", i is " << j << "\n";
}


void f(double k) {
	cout << "In f(double), k is " << k << '\n';
}
