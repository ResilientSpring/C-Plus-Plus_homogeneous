#include <iostream>
using namespace std;

int main() {

	int a[10] = { 2000, 2004, 6, 8, 10, 12, 14, 16, 18, 20 };
	int* p1;

	p1 = a;

	cout << *(p1++) << "\n";

	cout << *p1 << "\n";

	p1++;

	cout << *p1 << "\n";

}