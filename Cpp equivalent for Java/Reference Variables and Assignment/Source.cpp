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

}