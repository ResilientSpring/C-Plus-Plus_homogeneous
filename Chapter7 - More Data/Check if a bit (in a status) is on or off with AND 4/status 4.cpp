#include <iostream>
using namespace std;

int main() {

	int status;

	cout << "Check if the 2nd bit is 1: " << endl;

	cin >> status;

	//          0010
	if (status & 2)
		cout << "the 2nd bit is on" << endl;
	else
		cout << "the 2nd bit is off" << endl;

	/*
	    0010
	  & status
	  ---------
	
	*/
}