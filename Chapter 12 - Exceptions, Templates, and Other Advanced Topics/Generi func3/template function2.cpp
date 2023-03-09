#include <iostream>
using namespace std;

template<class I> void swapargs(I a, I b) { 

	I intermediary;
	intermediary = a;
	a = b;
	b = intermediary;

}


int main() {
	int i = 10, j = 20;

	cout << "Original i, j: " << i << " " << j << endl;

	swapargs(i, j); // swap integers

	cout << "Swapped i, j: " << i << " " << j << endl;
}