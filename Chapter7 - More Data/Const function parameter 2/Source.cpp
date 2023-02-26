// Change the contents of an array using a function.
#include <iostream>
using namespace std;

void cube(int* n, int num);

int main() {

	int i, nums[10];

	for (i = 0; i < 10; i++)
		nums[i] = i + 1;

	cout << "Original contents: "; 
	
	for (i = 0; i < 10; i++)
		cout << nums[i] << " ";
	
	cout << "\n";



}

void cube(int* n, int num) {
	while (num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}