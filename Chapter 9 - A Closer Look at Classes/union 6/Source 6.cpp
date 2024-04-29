#include <iostream>
using namespace std;

union u_type {

	short int i;
	char ch[2];

};


int main() {

	u_type u;
	u.i = 100;

	cout << "u as integer: " << u.i << "\n";
	cout << "u as chars: " << u.ch[0] << u.ch[1] << endl;

	u_type u2 = u_type();
	u2.ch[0] = 'X';
	u2.ch[1] = 'Y';

	cout << "u2 as integer: " << u2.i << "\n";
	cout << "u2 as chars: " << u2.ch[0] << " " << u2.ch[1] << endl;
}

