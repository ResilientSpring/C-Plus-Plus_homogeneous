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

	u_type u(100);

	cout << "u as integer: " << u.i << "\n";
	cout << "u as chars: " << u.ch[0] << u.ch[1] << endl;

	u_type u2('X', 'Y');
	cout << "u2 as integer: " << u2.i << "\n";
	cout << "u2 as chars: ";
	u2.showchars();
}

