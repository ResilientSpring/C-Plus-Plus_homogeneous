#include <iostream>
using namespace std;

int main() {

	int status;

	status = 8;

	if (status & 8)
		cout << "bit 4 is on" << endl;
	else 
		cout << "bit 4 is off" << endl;

	status = 15;

	if (status & 8)
		cout << "bit 4 is on" << endl;
	else
		cout << "bit 4 is off" << endl;

	status = 7;

	if (status & 8)
		cout << "bit 4 is on" << endl;
	else
		cout << "bit 4 is off" << endl;

}