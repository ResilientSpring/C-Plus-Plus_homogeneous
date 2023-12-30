#include <iostream>
#include <string>
using namespace std;

int main() {

	// A reference variable is a "reference" to an existing variable, and it is created with the & operator:

	string food = "Pizza";  // food variable.
	string &meal = food;   // reference to food.

	// Now, we can use either the variable name food or the reference name meal to refer to the food variable:
	cout << food << "\n";
	cout << meal << "\n";
}

// References: https://www.w3schools.com/cpp/cpp_references.asp