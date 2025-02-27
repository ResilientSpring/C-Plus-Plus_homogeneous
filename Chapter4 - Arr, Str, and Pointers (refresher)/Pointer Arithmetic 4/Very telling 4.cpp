#include <iostream>
using namespace std;

int main() {

	// Each time that a pointer is incremented/decremented, 
	// it will point to the memory location of the next/previous element of its base type.
	int a[10] = { 2000, 2004, 6, 8, 10, 12, 14, 16, 18, 20 };
	int* p1;

	p1 = a;

	// There are only four arithmetic operators that can be used on pointers: +, -, ++, --

	cout << *(p1++) << "\n";

	cout << *p1 << "\n";

	p1++;

	cout << *p1 << "\n";

	p1--;

	cout << *p1 << "\n";

	cout << *(--p1) << "\n";

	p1 = p1 + 9;

	cout << *p1 << endl;

	cout << *(p1 - 2) << endl;

	// In case of character pointers, an increment or decrement will appear as "normal" arithmetic
	// because characters are one byte long.
	char ch = 'a';
	char* character_pointer = &ch;

	cout << *(++character_pointer) << endl;

	cout << *(++character_pointer) << endl;

	char str[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	// character_pointer = &str;

	// char**  character_pointers = &str;

	cout << *(str) << endl;

	// cout << *(str++) << endl;

	char* ptr = str;  // ptr points to first character of string str

}