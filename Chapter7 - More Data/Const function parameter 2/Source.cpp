// Change the contents of an array using a function.
#include <iostream>
using namespace std;

void cube(int* n, int num);

int main() {

}

void cube(int* n, int num) {
	while (num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}