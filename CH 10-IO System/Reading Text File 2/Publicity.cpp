// Reading from file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char ch;
	int i;
	float f;
	char str[80];

	ifstream in("test");

	if (!in) {
		cout << "Cannot open file. \n";
		return 1;
	}

	in >> i;
	in >> f;
	in >> str;

	cout << i << " " << f << " " << str << endl;

	in.close();


}