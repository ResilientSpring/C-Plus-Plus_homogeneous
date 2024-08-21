#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	unsigned u;

	printf("Enter a number between 0 and 255: ");
	scanf("%u", &u);

// 	cout << "Enter a number between 0 and 255: ";
// 	cin >> u;

	cout << "Here's the number in binary: ";
	show_binary(u);

	cout << "Here's the complement of the number: ";
	show_binary(~u);

}


void show_binary(unsigned int u) {

	int t;

	for (t = 128; t > 0; t = t / 2)
		if (u & t)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}

int show_binary_2(unsigned int u) {

	for (int t = 128; t > 0; t = t / 2)
		if (u & t)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}