#include <iostream>
using namespace std;

class Vehicle {
public:
	int passengers;      // number of passengers.
	int fuelcap;         // fuel capacity in gallons. 
	int mpg;             // fuel consumption in miles per gallon

	// This is a constructor for Vehicle.
	Vehicle(int passengers, int fuelcap, int mpg) {
		this->passengers = passengers;
		this->fuelcap = fuelcap;
		this->mpg = mpg;
	}

	int range() {
		return mpg * fuelcap;
	}

};

// Use Vehicle to create a Truck specialization.
class Truck : public Vehicle {

};

int main() {



}