#include <iostream>
using namespace std;

int Game(int X);

int main() {

	int K;

	K = Game(5);

	cout << K << endl;

}


int Game(int X) {

	if (X > 1)
		return X * Game(X - 1);
	else
		return 1;

}