#include <iostream>
using namespace std;

int main() {
	int nums[10];

	for (int i = 0; i < 10; i++) {

		*nums = i;


	}


	cout << endl << "{";

	for (int i = 0; i < 10; i++)
		cout << nums[i] << " ";

	cout << "}" << endl;
}