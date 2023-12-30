#include <iostream>
#include <string>
using namespace std;

int main() {

	string food = "orange";
	string &snack = food;

	cout << food << "\n";
	cout << snack << "\n";

}