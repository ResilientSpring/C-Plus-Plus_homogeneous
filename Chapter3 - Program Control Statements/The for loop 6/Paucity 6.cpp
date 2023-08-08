// Show square roots of 1 to 99.
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	for (int num = 0; num <= 100; num++)
	{
		double square_root = sqrt(num);

		cout << square_root << " " << num << endl;
	}

}