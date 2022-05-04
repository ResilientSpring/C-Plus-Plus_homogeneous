// Add a constructor to the vehicle class.
#include <iostream>
using namespace std;

// Declare the Vehicle class
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

int main() {

	Vehicle minivan(7, 16, 21);
	Vehicle sportscar = Vehicle(2, 14, 12);

	int range1, range2;

	// Compute the ranges assuming a full tank of gas.
	range1 = minivan.range();
	range2 = sportscar.range();

	cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
	cout << "Sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n";

	return 0;

}