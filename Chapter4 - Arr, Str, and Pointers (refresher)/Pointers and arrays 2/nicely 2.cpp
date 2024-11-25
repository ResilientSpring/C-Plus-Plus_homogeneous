#include <iostream>
using namespace std;

int main() {

	char str[80];
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
}