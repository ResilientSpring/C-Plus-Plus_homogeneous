#include <iostream>
using namespace std;

int main() {

	char str[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char* p1;

	p1 = str;  // p1 = &str[0]

	printf(" *(p1 + 2) is %c.  \n", *(p1 + 2));

}