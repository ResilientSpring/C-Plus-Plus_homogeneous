#include <iostream>
using namespace std;

int main() {

	const char* str = "disavow";

	const char* p1;

	const char* p2;

	p1 = &str[5];

	p2 = str + 2;

	cout << *(p1 - 2) << endl;

	printf("%d \n", p1 - p2);
}