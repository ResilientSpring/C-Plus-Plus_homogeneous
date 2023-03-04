// Demonstrate the pointer version of swap().

#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main() {

}


void swap(int *x, int *y) {

	int temp;

	temp = *x; 
	*x = *y;
	*y = temp;

}
