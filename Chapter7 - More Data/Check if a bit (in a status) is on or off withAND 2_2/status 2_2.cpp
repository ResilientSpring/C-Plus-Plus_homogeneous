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

	// Page 257:
	// if x equals 7, then x && 8 evaluates to true, whereas x & 8 evaluates to false.

	if (status && 8)
		cout << "When status = 7, (status && 8) evaluates to true. " << endl;
	else if (status & 8)
		cout << "if(x & 8) evaluates to true." << endl;;

	if (!(status & 8))
		cout << "When status = 7, (status & 8) evaluates to false. " << endl << endl;

	// & is a bitwise operator.
	// && is not a bitwise operator.

	if (7 && 8)
		cout << "if(7 && 8) is true" << endl;

	if (7 & 8)
		cout << "if (7 & 8) is true" << endl;


	/**/

	if (7 && 8)
		cout << "7 is non-zero and 8 is non-zero, too!" << endl;

	if (7 & 8)
		cout << "7 is 0111 and 8 is 1000." << endl;


}