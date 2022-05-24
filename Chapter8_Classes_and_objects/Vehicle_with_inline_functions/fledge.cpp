// Define constructor, destructor, and range() function in-line.
#include <iostream>
#include <stdio.h>
using namespace std;

// Declare the Vehicle class.
class Vehicle {
	// These are now private.
	int passengers; 
	int fuelcap;
	int mpg;

public:
	// This is a constructor for Vehicle.
	Vehicle(int p, int f, int m) {
		passengers = p;
		fuelcap = f;
		mpg = m;
	}

	// Compute and return the range.
	int range() {
		return mpg * fuelcap;
	}

	// Accessor functions.
	int get_passenger() {
		return passengers;
	}

	// Define functions inline.
	int get_fuelcap() {
		return fuelcap;
	}

	// Access private variables through public accessor functions.
	int get_mpg() {
		return mpg;
	}
};

int main() {
	// Pass value to Vehicle constructor.
	Vehicle minivan = Vehicle(7, 16, 21);
	Vehicle sportscar(2, 14, 12);

	int range1, range2;

	// Compute the ranges assuming a full tank of gas.
	range1 = minivan.range();
	range2 = sportscar.range();

	printf("Minivan can carry %d with a range of %d", minivan.get_passenger(), range1);

	cout << "\nSportscar can carry " << sportscar.get_passenger() << " with a range of " << range2;

	return 0;
}
