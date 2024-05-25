#include <iostream>
using namespace std;

int main() {

	int x, y, count = 0;

	for (x = 0, y = 0; (y != 123) && (x < 4); x++) {

		count++;

	}

	cout << count << endl;

}