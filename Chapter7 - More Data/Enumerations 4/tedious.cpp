#include <iostream>
using namespace std;

enum transport
{
	car, truck, airplane, train, boat
};

char name[][20] = {

	"Automobile",
	"Truck",
	"Airplane",
	"Train",
	"Boat"

};

int main() {

	transport how;

	how = car;

	cout << name[how] << endl;

	how = airplane;

	cout << name[how] << endl;

	how = train;

	cout << name[how] << endl;

}