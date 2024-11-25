#include <iostream>
using namespace std;

int main() {

	char str[80] = "I may have left my phone in the car. \n I must leave it in the car. \n";
	char* p1;
	char* p2;

	p1 = str;

	p2 = &str[0];

	if (p1 == p2)
		printf(" p1 holds %p \n p2 holds %p \n Thus, str and &str[0] return the same value.\n", p1, p2);

	if (str == &str[0])
		printf(" str == &str[0] \n");
	else
		printf(" str != &str[0] \n");

	// Since p1 points to the beginning of str, you can use p1 to access elements in the array.

	printf("%c \n", *(&str[0]));

	printf("%c \n", *(str));

	if (*(p1 + 8) == str[8]) {

		printf("%c , %c  \n", *(p1 + 8), *(&str[0 + 8]));
	}
}