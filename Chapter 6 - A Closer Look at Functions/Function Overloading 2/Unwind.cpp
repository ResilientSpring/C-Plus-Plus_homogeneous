// Overload a function three times. 

#include <iostream>
using namespace std;

void f(int i);                // One integer parameter
void f(int i, int j);         // Two integer parameters
void f(double k);             // One double parameter
void f(int l, char m, double n);


int main() {

	f(10);                // call f(int)

	f(10, 20);            // call f(int, int)

	f(12.23);             // call f(double)

	f(1, 'o', 2.3);       // call f(int, char, double)

}

// To overload a function, type or the number of parameters of each overloaded function must differ. 

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

void f(int l, char m, double n) {
	cout << "In f(int, char, double), l, m, and n are " << l << ", " << m << ", and " << n << endl;
}
