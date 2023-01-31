#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

// Declare the Vehicle class.
class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;

	int range(); // Declare the range() member function.
};

// :: links a class name with a member name in order to tell the compiler what class 
// the member belongs to.
int Vehicle::range() {                      
	return mpg * fuelcap;
}


int main() {
	Vehicle minivan;  // Create a Vehicle object.
	Vehicle sportscar; // Create another object.

	int range1, range2;

	// Assign values to fields in minivan.
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	// Assign values to fields in sportscar.
	sportscar.passengers = 2;
	sportscar.fuelcap = 14;
	sportscar.mpg = 12;

	// Compute the range assuming a full tank of gas.
	range1 = minivan.range();                            // Call range() on Vehicle objects.
	range2 = sportscar.range();

	cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
	cout << "Sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n";

	return 0;
}