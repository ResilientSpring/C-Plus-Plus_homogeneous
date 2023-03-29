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

	// Accessor functions for employee data.
	string get_name() {
		return name;
	}

	string get_ID() {
		return ID;
	}

	string get_department() {
		return department;
	}

	string get_phone() {
		return phone;
	}
};


// Compare objects by ID.
bool operator<(employee a, employee b) {
	return a.get_ID() < b.get_ID();
}

// Check for equality based on ID.
bool operator==(employee a, employee b) {
	return a.get_ID() == b.get_ID();
}

// Create an inserter for employee.
ostream& operator<<(ostream &s, employee &o) {

	s << o.get_name() << endl;
	s << "Employee #:  " << o.get_ID() << endl;
	s << "Dept:  "       << o.get_department() << endl;
	s << "Phone: " << o.get_phone() << endl;

	return s;
}




int main() {

}