#include <iostream>
using namespace std;

int main() {

	char msg[] = "This is a test";

	char key = 88;

	cout << "Original message: " << msg << "\n";

	// Exclusive OR sets a bit on only when the bits being compared are different.

	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;   

	cout << "Encoded message: " << msg << endl;

	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;  

	cout << "Decoded message: " << msg << "\n";

}