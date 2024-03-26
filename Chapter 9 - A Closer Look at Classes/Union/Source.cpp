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



}