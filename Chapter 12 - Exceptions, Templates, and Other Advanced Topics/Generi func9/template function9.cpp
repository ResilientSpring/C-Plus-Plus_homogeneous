#include <iostream>
using namespace std;

template<class X>
void swapargs(X a, X b) {

	X intermediary;
	intermediary = a;
	a = b;
	b = intermediary;
}

int main() {
	int i = 10, j = 20;

	swapargs(i, j);

	cout << "(i, j): " << "(" << i << "," << j << ")";
}
