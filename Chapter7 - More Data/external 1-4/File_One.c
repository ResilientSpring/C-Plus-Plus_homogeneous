#include <stdio.h>

int x, y;
char ch;

void func1();

extern func22();
extern func23();

int main() {

	func1();

	func23();

	func22();

	printf("%d\n", x);

}

void func1() {
	x = 123;
}