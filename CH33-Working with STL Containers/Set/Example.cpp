// Demonstrate set.

// This example stores objects that contain employee information. 
// The employee's ID is used as the key.

#include <iostream>
#include <set>
#include <string>
using namespace std;


// This class stores employee information. 
class employee {

	string name;
	string ID;
	string phone;
	string department;

public:

	// Default constructor
	employee() {
		ID = name = phone = department = "";
	}

};



int main() {

}