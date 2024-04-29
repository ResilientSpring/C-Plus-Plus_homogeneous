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
	cout << "u as chars: " << u.ch[0] << endl;
	
	cout << "ch[0]: " << u.ch[0] << endl;
	cout << "ch[1]: " << u.ch[1] << endl;
}

