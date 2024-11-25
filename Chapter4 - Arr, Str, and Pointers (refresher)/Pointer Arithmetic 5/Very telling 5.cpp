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

	character_pointer = str;

	cout << "str is " << str << endl;

	cout << "&str is " << &str << endl;

	cout << character_pointer << endl;

	cout << character_pointer[0] << endl;

	cout << &character_pointer[0] << endl;

	printf("%p \n", &character_pointer[0]);  // [1]

	printf("str is %s \n", str);

	printf("str is %c \n", str[1]);

	printf("str is %p \n", str);

	printf("&str is %p \n", &str);

	++character_pointer;

	printf("%c \n", *character_pointer);

	printf("%s \n", character_pointer);

	character_pointer = str;

	printf("%s \n", character_pointer);

	character_pointer = str + 5 - 1;

	printf("%c \n", *character_pointer);

	--character_pointer;

	printf("%s \n", --character_pointer);

}

// References:
// 1. https://stackoverflow.com/questions/5417967/pointer-will-not-work-in-printf
// 2. https://stackoverflow.com/questions/47050210/character-pointer-in-c
// 3. https://www.tutorialspoint.com/cprogramming/c_character_pointers_and_functions.htm
