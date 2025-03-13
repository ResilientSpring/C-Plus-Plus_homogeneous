#include <iostream>
using namespace std;

enum transport
{
	car, truck, airplane, train, boat
} how;

char name[][15] = {

	"Automobile",
	"Truck",
	"Airplane",
	"Train",
	"Boat"

};

int main() {

	how;

	how = car;

	// Aceesing an individual string is quite easy: you simply specify only the left index. [1]
	cout << name[how] << endl;

	how = airplane;

	cout << name[how] << endl;

	how = train;

	cout << name[how] << endl;

	how = truck;

	// To access an individual character within the string, you will use a statement like this: [1]
	cout << name[how][2] << endl;

}

/*

Reference:
1. C++ A Beginner's Guide - section on Array of Strings

*/