#include <iostream>
using namespace std;

union u_type {

	short int i;
	char ch[2];

	void showchars() {
		cout << ch[0] << " ";
		cout << ch[1] << "\n";
	}

	u_type(short int a) {
		i = a;
	}

	u_type(char x, char y) {

		ch[0] = x;
		ch[1] = y;

	}

};


int main() {

	u_type u(1000);
	u_type u2('X', 'Y');
	cout << "u as integer: ";
	cout << u.i << "\n";
	cout << "u as chars: ";
	u.showchars();

	cout << "u2 as integer: ";
	cout << u2.i << "\n";
	cout << "u2 as chars: ";
	u2.showchars();

}