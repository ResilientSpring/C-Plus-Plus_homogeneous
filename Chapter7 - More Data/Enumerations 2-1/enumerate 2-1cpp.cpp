#include <iostream>
using namespace std;

// Defined a list of named integer that represents 0, 1, 2, and so forth.
enum transport
{
	// 0 ,   1  ,    2    , and so forth.
	car, truck, airplane, train, boat
};

int main() {

	transport how;

	how = airplane;

	cout << how << endl;

}