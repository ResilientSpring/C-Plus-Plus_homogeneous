#include <iostream>
using namespace std;

int Game(int X);

int main() {




}


int Game(int X) {

	if (X > 1)
		return X * Game(X - 1);
	else
		return 1;

}