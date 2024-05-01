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
	int cargo_capacity;  // cargo capacity in pounds.

public:
	// This is a constructor for Truck
	Truck(int p, int f, int m, int c) : Vehicle(p, f, m) {
		cargo_capacity = c;
	}

	// Accessor function for cargo_capacity
	int get_cargo_capacity() {
		return cargo_capacity;
	}
};

int main() {

	// Construct some trucks.
	Truck semi(2, 200, 7, 44000);
	Truck pickup(3, 28, 15, 2000);
	int dis = 252;

	cout << "Semi can carry " << semi.get_cargo_capacity() << " pounds.\n";

	cout << "It has a range of " << semi.range() << " miles.\n";
}