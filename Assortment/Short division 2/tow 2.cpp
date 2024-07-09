#include <iostream>
using namespace std;

void short_division_of_an_unsigned_integer_by_2(unsigned int u);

int main() {

	short_division_of_an_unsigned_integer_by_2(192);

}


void short_division_of_an_unsigned_integer_by_2(unsigned int u) {

	int number = u;

	if (number % 2 == 1) {
		printf("1 ");
		number /= 2;
		short_division_of_an_unsigned_integer_by_2(number);
	}
	else if (number % 2 == 0) {
		printf("0 ");
		number /= 2;
		short_division_of_an_unsigned_integer_by_2(number);
	}
	else if (number < 1) {
		printf("\n");
		return;
	}
}