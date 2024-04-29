#include <iostream>
using namespace std;

// Defined a list of named integer that represents 0, 1, 2, and so forth.
enum transport
{
	// 0 ,   1  ,     10     ,  11  ,  12  .
	car, truck, airplane = 10, train, boat
};

int main() {

	transport how;

	how = airplane;

	cout << airplane << endl;

	cout << train << endl;

	cout << boat << endl;

}