#include <iostream>
using namespace std;

int main() {

	char msg[] = "This is a test";

	char key = 88;

	cout << "Original message: " << msg << "\n";

	// Exclusive OR sets a bit on only when the bits being compared are different.

	// 	XOR has an interesting property making it a way to encode an array of characters.
	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;    // When A is XORed with B, C ensues.
	       //  0101 0100 ^ 0101 1000

	       //  0101 0100
	       //  0101 1000
	//   ^  -------------------
	//         0000 1100



	cout << "Encoded message: " << msg << endl;


	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;   // When C is XORed with B, A ensues.

	cout << "Decoded message: " << msg << "\n";

}