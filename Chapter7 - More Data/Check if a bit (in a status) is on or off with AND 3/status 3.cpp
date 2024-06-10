#include <iostream>
using namespace std;

int main() {

	int status;

	cout << "Check if the 3rd bit is 1: " << endl;

	cin >> status;

	if (status & 4)
		cout << "the 3rd bit is on" << endl;
	else
		cout << "the 3rd bit is off" << endl;

}