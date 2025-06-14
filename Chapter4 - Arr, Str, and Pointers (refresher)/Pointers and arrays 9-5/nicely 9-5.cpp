#include <stdio.h>

int main() {

	char str1[80] = "abcdefghijklmnopqrstuvwxyz\n";
	char str2[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	printf("str1     is %22p. \n", str1);
	printf("&str1[0] is %22p. \n", &str1[0]);
	printf("&str1    is %22p. \n", &str1);

	printf("(str1 + 1)     is %p. \n", (str1 + 1));
	printf("(&str1[0] + 1) is %p. \n", (&str1[0] + 1));

	printf("&str1[1]       is %p. \n", &str1[1]);
	printf("&str1[79]      is %p. \n", &str1[79]);

	printf("&str1 + 1 is %21p. \n", (&str1 + 1));
	printf("&str2     is %21p. \n", &str2);
	printf("&str2[0]  is %21p. \n", &str2[0]);
	printf("str2      is %21p. \n", str2);

	printf("\nstr1 == &str1[0], so (str1 + 1) == (&str1[0] + 1); \n\n");
	printf("Although &str1 is identical to str1, &str1 refers to the whole str1; so (&str1 + 1) will\n");
	printf(" be the memory address immediately after str1; immediately after str1[79] in this case.\n\n");

	printf("&str1[80]      is %p. \n", &str1[80]);  //  the address of the first element past the end of an array can be used in pointer arithmetic.[1]:117

	printf("&str1[81]      is %p. \n", &str1[81]);  // See [2] for analysis.

	// int h = 0x00;
	// h = (&str1 + 1) - &str1[79];
	// printf("%p", (&str1 + 1) - &str1[79]);
}

// References:
// 1. C Programming Language
// 2. https://chatgpt.com/c/684af2e3-e85c-8008-98bd-6b2ac75832d5
