/*
* Project 4-2
* Reverse a string in place.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[] = "this is a test";
	char *start, *end;
	int len;
	char t;

	printf("Original: %s \n", str);
	len = strlen(str);
	start = str;
	end = &str[len - 1];

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;
	}

}
