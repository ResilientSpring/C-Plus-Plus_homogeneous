// Index a pointer as if it were an array.
#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char* p;
	int i;
	char str[80] = "This Is A Test";

	printf("Original string: %s \n", str);

	p = str;  // assign p the address of the start of the array, i.e &str[0]
}