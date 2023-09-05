#include <iostream>
using namespace std;

int main() {

	char str[10] = "implicate";

	char arr_str[][10] = { "implicate", "implicit" };

	char arr_str2[5][10] = { "implicate", "implicit", "hedge", "possibly", "abc"};

	// This is an array of 5 strings, each can hold 9 characters.


	cout << str << endl;
	cout << arr_str[0] << endl;
	cout << arr_str[0][1] << endl;
	cout << arr_str[1][2] << endl;
}