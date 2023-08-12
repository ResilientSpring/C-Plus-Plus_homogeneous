// Show square roots of 1 to 99.
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double square_root;

	for (int num = 0; num < 100; num++)
	{
		square_root = sqrt( (double) num);

		cout << num << " " << square_root << endl;
	}

}