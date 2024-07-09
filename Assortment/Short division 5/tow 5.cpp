#include <iostream>
using namespace std;

void short_division_of_an_unsigned_integer_by_2(unsigned int u);

int main() {

	short_division_of_an_unsigned_integer_by_2(192);
	short_division_of_an_unsigned_integer_by_2(193);

}


void short_division_of_an_unsigned_integer_by_2(unsigned int u) {

	for (int i = u; i > 0; i /= 2) {

		int remainder = i % 2;

		switch (remainder)
		{
		case '1':
			printf("1");
			break;
		case '0':
			printf("0");
			break;
		}
	}

}