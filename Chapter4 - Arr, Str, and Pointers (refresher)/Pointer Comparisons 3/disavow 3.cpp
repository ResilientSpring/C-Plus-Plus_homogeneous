#include <iostream>
using namespace std;

int main() {

	//	const char* str = "disavow";

	// const char* p1;

	char str[50] = "This_is_an_array_of_characters. ";

	char* p2;
	char* p3;

	p3 = &str[8];

	p2 = &str[3];

	// const char* p4;

	// p4 = &str[8];

	// const char* p5;

	// p5 = &str[3];

	if (p3 > p2)
		printf("Pointer comparison succeeded. \n");
	else {
		printf("p3 is holding a character of %c while p2 is holding a character of %c. \n", *p3, *p2);
	}
}