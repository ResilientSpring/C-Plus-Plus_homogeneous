#include <iostream>
using namespace std;

int main() {

	char str[80] = "err on the side of caution.";
	char str2[80] = "wishful thinking";

	printf("The content of str is %s\n", str);
	printf("The content of str2 is %s.\n", str2);

}

void exchanger(char* a, char* b) {



}

void exchanger2(char* a) {

	int length = strlen(a);
	char* start = a;
	char* end = &a[length - 1];
	char intermediate;

	while (start < end) {

		intermediate = *start;
		*start = *end;
		*end = intermediate;

		start++;
		end--;

	}

}