#include <iostream>
using namespace std;

#define EVEN(a)  (a)%2 == 0 ? 1 : 0

int main() {

	if (EVEN(9 + 1))
		cout << "is even";
	else
		cout << "is odd";

}