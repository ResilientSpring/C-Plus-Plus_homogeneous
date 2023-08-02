#include <iostream>
using namespace std;

int main() {

	double Principal;    // original principal
	double Interest_rate; 
	double PayPerYear;
	double NumYears;
	double Payment;    // the regular payment
	double numer, denom;  // temporary work variables. 
	double base, exponent;    // base and exponent for call to pow()


	cout << "Enter principal: ";
	cin >> Principal;

	cout << "Enter number of payments per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;

	numer = Interest_rate * Principal / PayPerYear;

	exponent = -(PayPerYear * NumYears);

	base = (Interest_rate / PayPerYear) + 1;

	denom = 1 - pow(base, exponent);

	Payment = numer / denom;

	cout << "Regular payment is " << Payment;

}