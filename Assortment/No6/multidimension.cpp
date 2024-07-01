#include <iostream>
using namespace std;

int main() {

	int a[10] = { 3, 2, 1, 4, 5, 6, 10, 8, 9, 7 };

	int* p;

	p = &(a + 3)[3];

	printf("%p", (void*)p);

	printf("\n%d", *p);

}