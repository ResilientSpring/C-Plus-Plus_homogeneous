#include <iostream>
using namespace std;

void short_division_of_an_unsigned_integer_by_2(unsigned int u);

int main() {



}


void short_division_of_an_unsigned_integer_by_2(unsigned int u) {

	if (u % 2 == 1) {
		printf("1 ");
		u /= 2;
		short_division_of_an_unsigned_integer_by_2(u);
	}
	else if (u % 2 == 0) {
		printf("0 ");
		u /= 2;
		short_division_of_an_unsigned_integer_by_2(u);
	}
	else if (u < 1) {
		printf("\n");
	}
}