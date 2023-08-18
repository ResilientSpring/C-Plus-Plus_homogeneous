#include <iostream>
using namespace std;

class Vehicle {

public:

	int passengers;
	int fuelcap;
	int mpg;

};


int main() {

	Vehicle car1 = Vehicle();
	Vehicle car2;

	car2 = car1;

	car1.mpg = 26;

	cout << car1.mpg << endl;
	cout << car2.mpg << endl;

	Vehicle car3;

//	car2 = car3;

	//	cout << car2.mpg << endl;

	car3 = car1;

	cout << car3.mpg << endl;
}