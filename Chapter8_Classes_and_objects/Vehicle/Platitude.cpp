// This program creates two Vehicle objects
#include <iostream>
using namespace std;

// Declare the Vehicle class.
class Vehicle {
public:
	int passenger;
	int fuelcap;
	int mpg;
};

int main() {
	Vehicle minivan; // create a Vehicle object.
	Vehicle sportscar; // Create another object.

	int range1, range2;

	// Assign values to fields in minivan.
	minivan.passenger = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	// Assign values to fields in sportscar. 
	sportscar.passenger = 2;
	sportscar.fuelcap = 14;
	sportscar.mpg = 12;

	// Compute the ranges assuming a full tank of gas.
	range1 = minivan.fuelcap * minivan.mpg;
	range2 = sportscar.fuelcap * sportscar.mpg;

	cout << "Minivan can carry " << minivan.passenger << " with a range of " << range1 << "\n";
	cout << "Sportscar can carry " << sportscar.passenger << " with a range of " << range2 << "\n";

	return 0;
}