// Print a string backwards using recursion.

#include <iostream>
using namespace std;

void reverse(char* s);

int main() {

}

// Print string backwards.
void reverse(char *s) {
	
	if (*s)
		reverse(s + 1);
}
