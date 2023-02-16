// Overload a function three times. 

#include <iostream>
using namespace std;

void f(int i);
void f(int i, int j);
void f(double k);


int main() {

}


void f(int i) {
	cout << "In f(int), i is " << i << "\n";
}

void f(int i, int j) {
	cout << "In f(int, int), i is " << i;
	cout << ", i is " << j << "\n";
}


void f(double k) {
	cout << "In f(double), k is " << k << '\n';
}
