#include <iostream>
using namespace std;

int main() {

	char msg[] = "This is a test";

	char key = 88;

	cout << "Original message: " << msg << "\n";

	// Exclusive OR sets a bit on only when the bits being compared are different.

	// 	XOR has an interesting property making it a way to encode an array of characters.
	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;    // When A is XORed with B, and C ensues.

	cout << "Encoded message: " << msg << endl;


	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;   // When C is 

	cout << "Decoded message: " << msg << "\n";

}