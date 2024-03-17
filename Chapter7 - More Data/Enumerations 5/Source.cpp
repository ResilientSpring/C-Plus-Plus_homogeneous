#include <iostream>
using namespace std;

enum transport
{
	car, truck, airplane, train, boat
};

char name[][15] = {

	"Automobile",
	"Truck",
	"Airplane",
	"Train",
	"Boat"

};

int main() {

	transport how;

	how = car;

	// Aceesing an individual string is quite easy: you simply specify only the left index. 
	cout << name[how] << endl;

	how = airplane;

	cout << name[how] << endl;

	how = train;

	cout << name[how] << endl;

}