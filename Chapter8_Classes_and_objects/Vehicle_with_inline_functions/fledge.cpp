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

	int get_fuelcap() {
		return fuelcap;
	}

	int get_mpg() {
		return mpg;
	}
};

int main() {

}
