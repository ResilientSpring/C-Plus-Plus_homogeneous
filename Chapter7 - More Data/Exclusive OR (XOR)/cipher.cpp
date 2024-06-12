#include <iostream>
using namespace std;

int main() {

	char msg[] = "This is a test";

	char key = 88;

	cout << "Original message: " << msg << "\n";


	for (int i = 0; i < strlen(msg); i++)
	{
		msg[i] = msg[i] ^ key;    // This construts the encoded string.
	}

	cout << "Encoded message: " << msg << endl;

	for (int i = 0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;   // This constructs the decoded string.

	cout << "Decoded message: " << msg << "\n";

}