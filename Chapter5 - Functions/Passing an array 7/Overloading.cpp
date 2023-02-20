#include <iostream>
using namespace std;


void displays(int num[]);  // Recall that C++ performs no bounds checking on arrays. 
						   // Thus, display(int num[10]) is the same as display(int num[]).
void display(int num[10]);
void display(int* num);


int main() {
	int t[10];

	for (int i = 0; i < 10; ++i)
		t[i] = i;

	displays(t);  // Pass array t to a function.
}

// Print some numbers.
void display(int num[10]) {

	for (int i = 0; i < 10; i++)
		cout << num[i] << ' ';
}

void displays(int num[]) {      // Parameter declared as an unsized array.

	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		cout << num[i] << ' ';
}

void display(int* num) {       // Parameter declared as a pointer.

	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
}
