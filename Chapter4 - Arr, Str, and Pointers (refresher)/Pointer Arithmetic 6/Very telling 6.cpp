#include <iostream>
using namespace std;

int main() {

	const char* str = "disavow";

	const char* p1;

	const char* p2;

	p1 = &str[5];

	p2 = str + 2;

	cout << *(p1 - 2) << endl;

	printf("%d \n", p1 - p2);  // [1][2]
}


// References:
// 1. https://www.google.com/search?q=subtracting+one+pointer+from+another
// 2. https://stackoverflow.com/questions/39984816/when-subtracting-two-pointers-in-c