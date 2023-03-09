#include <iostream>
using namespace std;

void swapargs(int a = 1, int b = 2);

int main() {

	int i = 10, j = 20;

	cout << "Original value i, j: " << i << " " << j << endl;

	swapargs(i, j);

	cout << "Swapped i, j: " << i << " " << j << endl;

}

void swapargs(int a=1, int b=2) {
	
	int intermediary;

	intermediary = a;

	a = b;

	b = intermediary;
}