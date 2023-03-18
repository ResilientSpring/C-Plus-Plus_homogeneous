// Use put() to write to a file. 

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char *p = "hello there. \n";

	ofstream out("test", ios::binary);

	if (!out) {
		
		cout << "Tried to associate stream with your file but didn't succeed.";

		return 1;

	}

	// Write characters until the null-terminator is reached.
	while (*p)
	{
		out.put(*p++);

	}

}