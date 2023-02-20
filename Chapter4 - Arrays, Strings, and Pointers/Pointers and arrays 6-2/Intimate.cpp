#include <iostream>
using namespace std;

int main() {
	// int num[80] = 2468;

	int num[80] = { 2, 4, 6, 8, 2468 };

	cout << "Original string: " << num << endl;

	// To access the value stored in the memory address
	for(int i; i < sizeof(num)/sizeof(num[0]) ; i++)
		cout << "Value: " << 
}
