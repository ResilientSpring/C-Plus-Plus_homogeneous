#include <iostream>
using namespace std;

union u_type {

	short int i;
	char ch[2];

	// constructor
	u_type(short int a) {
		i = a;
	}

	// constructor
	u_type(char x, char y) {

		ch[0] = x;
		ch[1] = y;

	}

	void showchars() {
		cout << ch[0] << " ";
		cout << ch[1] << "\n";
	}

};


int main() {

	u_type u(1000);

	cout << "u as integer: " << u.i << "\n";
	cout << "u as chars: ";
	cout << u.showchars();

	u_type u2('X', 'Y');
	cout << "u2 as integer: " << u2.i << "\n";
	cout << "u2 as chars: ";
	cout << u2.showchars();   // cout does not know what to print b/c showchars() returns a void.[1][2]
}

// References:
// 1. https://stackoverflow.com/questions/21996995/no-operator-matches-these-operands
// 2. https://stackoverflow.com/questions/2981836/how-can-i-use-cout-myclass