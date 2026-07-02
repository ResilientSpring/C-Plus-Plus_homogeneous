#include <stdio.h>

int x, y;
char ch;

void func1();

int main() {

	func1();

	printf("%d\n", x);

}

void func1() {
	x = 123;
}