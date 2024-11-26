#include <iostream>
using namespace std;

int main() {

	char str[80] = "abcdefghijklmnopqrstuvwxyz \nABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
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

	printf("*(&str[0]) is %c \n", *(&str[0]));

	printf("*(str) is %c \n", *(str));

	if (*(p1 + 8) == str[8]) {

		printf("*(p1 + 8) is %c \n*(&str[0 + 8]) is %c  \n", *(p1 + 8), *(&str[0 + 8]));
	}
	else
		printf("*(p1 + 8) != str[8]");


	printf("&str is %p \n", &str);

	printf("&str[0] is %p \n", &str[0]);

	printf("str is %p  \n", str);

	printf("*(str + 7) is %c \n", *(str + 7));

	printf("str[7] is %c \n", str[7]);

	printf("*(&str + 7) is %c \n", *(&str + 7));

	printf("*(&str[0] + 7) is %c \n", *(&str[0] + 7));
}
