#include <iostream>
using namespace std;

int main() {

	int j[10];

	double g[10];

	// Add values 0 through 9 to the memory address of the first element of the array. 
	// (Print memory address of each element of the array.)
	for (int x = 0; x < 10; x++)
		cout << j + x << " " << g + x << endl;
}