#include <iostream>
using namespace std;

int main() {

	int nrows = 200;

	auto arr2D = new int[nrows][96];

	arr2D[0][1] = 68;

	cout << arr2D[0][1] << endl;
}