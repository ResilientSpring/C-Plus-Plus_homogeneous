// Change the contents of an array.
#include <iostream>
using namespace std;

int main() {
	int i;
	int nums[10];

	for (i = 0; i < 10; i++)
		nums[i] = i + 1;


}

void cube(int *n, int num) {
	while (num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}