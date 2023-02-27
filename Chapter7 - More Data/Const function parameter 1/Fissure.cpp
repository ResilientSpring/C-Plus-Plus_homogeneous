#include <iostream>
using namespace std;

int negate(int& value);

int main() {
	int result;
	int v = 10;

	result = negate(&v);

}


int negate(const int &value) {
	value = -value;

	return value;
}

