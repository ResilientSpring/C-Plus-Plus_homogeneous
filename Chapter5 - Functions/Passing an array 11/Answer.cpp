#include <iostream>
using namespace std;


void displays(int num[]);  // Recall that C++ performs no bounds checking on arrays. 
						   // Thus, display(int num[10]) is the same as display(int num[]).
void display(int num[10]);

void displaying(int* num);  // void display(int num[]);    ==     void displaying(int* num);

/*
The following three functions' parameters are the same in C, so they can't share the same function name.

void display(int num[]);
void display(int num[10]);
void display(int* num);

*/

/*

void display(int num[]);        // Using the array name without index attached.

void display(int* num);         // Using the array name without index attached.

*/

/*

void display(int num[]);        // Recall that C++ performs no bounds checking on arrays.

void display(int num[10]);      // Thus, display(int num[10]) is the same as display(int num[]).

*/


int main() {
	int t[10];

	for (int i = 0; i < 10; ++i)
		t[i] = i;

	displaying(t);  // Pass array t to a function.
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

void displaying(int* num) {       // Parameter declared as a pointer.

	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
}
