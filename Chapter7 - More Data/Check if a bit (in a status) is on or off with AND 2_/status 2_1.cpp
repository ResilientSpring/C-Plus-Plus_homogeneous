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

	if (status && 8)
		cout << "When status = 7, (x && 8) evaluates to true " << endl;

}