#include <iostream>
using namespace std;

int main() {

	const char *ptr;

	ptr = "Pointers add power to C++.\n";  // ptr is assigned the address of this string constant.

	cout << ptr << endl;

	printf("%c \n", *(ptr + 2));

}