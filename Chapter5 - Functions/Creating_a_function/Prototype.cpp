// This program contains two functions: main() and myfunc().
#include <iostream>
using namespace std;

void myfunc();  // This is myfunc()'s prototype.

int main() {
	cout << "In main()\n";

	myfunc();  // Call myfunc()

	cout << "Back in main()\n";

	return 0;
}

// This is the function's definition.
void myfunc() {
	cout << "Inside myfunc()\n";
}
