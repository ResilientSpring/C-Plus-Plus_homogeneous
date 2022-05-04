// This program creates two Vehicle objects
#include <iostream>
using namespace std;

// Declare the Vehicle class.
class Vehicle {
public:
	int passenger;
	int fuelcap;
	int mpg;
} minivan, sportscar;  // Note that minivan and sportscar are global.

int main() {
	int range1, range2;

	minivan.passenger = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	sportscar.passenger = 2;
	sportscar.fuelcap = 14;
	sportscar.mpg = 12;

	range1 = minivan.fuelcap * minivan.mpg;
	range2 = sportscar.fuelcap * sportscar.mpg;

	cout << "Minivan can carry " << minivan.passenger << " with a range of " << range1 << "\n";
	cout << "Sportscar can carry " << sportscar.passenger << " with a range of " << range2 << "\n";

	return 0;
}