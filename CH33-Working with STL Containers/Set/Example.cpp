// Demonstrate set.

// This example stores objects that contain employee information. 
// The employee's ID is used as the key.

#include <iostream>
#include <set>
#include <string>
using namespace std;


// This class stores employee information. 
class employee {

	string ID;
	string name;
	string phone;
	string department;

public:

	// Default constructor
	employee() {
		ID = name = phone = department = "";
	}


	// Construct temporary object using only the ID, which is the key.
	employee(string ID) {

		this->ID = ID;

		name = phone = department = "";

	}


	// Construct a complete employee object.
	employee(string name, string ID, string department, string phone) {

		this->name = name;
		this->ID = ID;
		this->department = department;
		this->phone = phone;


	}

};



int main() {

}