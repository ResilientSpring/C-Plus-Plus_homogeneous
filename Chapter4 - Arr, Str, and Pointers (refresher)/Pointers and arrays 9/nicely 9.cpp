#include <iostream>
using namespace std;

int main() {

	char str1[80] = "abcdefghijklmnopqrstuvwxyz\n";
	char str2[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	printf("str1     is %p. \n", str1);
	printf("&str1[0] is %p. \n", &str1[0]);
	printf("&str1    is %p. \n", &str1);

	printf("(str1 + 1)     is %p. \n", (str1 + 1));
	printf("(&str1[0] + 1) is %p. \n", (&str1[0] + 1));

	printf("&str1[1]       is %p. \n", &str1[1]);
	printf("&str1[79]      is %p. \n", &str1[79]);

	printf("&str1 + 1 is %p. \n", (&str1 + 1));
	printf("&str2     is %p. \n",  &str2);
	printf("&str2[0]  is %p. \n",  &str2[0]);
	printf("str2      is %p. \n",   str2);

	printf("\nstr == &str[0], so (str1 + 1) == (&str1[0] + 1); \n");
	printf("Although &str1 is identical to str1, &str1 refers to the whole str1; so (&str1 + 1) will\n");
	printf(" be the memory address immediately after str1; immediately after str1[79] in this case.");
}
