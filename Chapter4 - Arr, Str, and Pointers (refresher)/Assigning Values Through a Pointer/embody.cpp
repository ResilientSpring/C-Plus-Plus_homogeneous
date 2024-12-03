#include <iostream>
using namespace std;

int main() {

	int* p;
	int num;

	p = &num;

	*p = 100;     // Assign num the value 100 through p.

	cout << num << " ";

	(*p)++;       // Increment num through p.

	cout << num << " ";

	(*p)--;      // Decrement num through p.

	cout << num << "\n";

}