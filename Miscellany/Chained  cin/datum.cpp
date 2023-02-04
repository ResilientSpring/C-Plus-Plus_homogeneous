#include <iostream>
using namespace std;

int main() {
	
	int i;
	
	cout << "Please enter an integer value: ";

	cin >> i;

	cout << "The value you entered is " << i << ". \n";

	cout << " and ";

	cout << i;

	cout << " 's double is ";

	cout << i * 2;

	cout << "\n";

	////////////////////////

	int a, b;

	cout << "Please enter another integer value: ";

	cin >> a >> b;

	cout << "The value you entered is " << a << "\n";

	cout << "Variable b now holds " << b  << "\n";


	//////////////////////////

	int c, d;

	cout << "Please enter a pair of integer values: ";

	cin >> c >> d;

	cout << "The pair of values you entered are " << c << " and " << d << ".\n";

}

/*
 References:

 1. https://github.com/romulus0914/fpga_technology_mapping/blob/master/greedy_mapping.cpp
 
 2. https://cplusplus.com/doc/tutorial/basic_io/

 */