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
}
