#include <iostream>
using namespace std;

int main() {

	int x, y;

	x = 10;

	y = ++x;

	cout << "y is " << y << "\n";

	y = x++;

	cout << "y is " << y << "\n";



	cout << "x is " << x << "\n";
}