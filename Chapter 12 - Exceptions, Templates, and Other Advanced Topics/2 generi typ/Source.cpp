// You can define more than one generic data type in the template statement 
// by using a comma-separated list.

#include <iostream>
using namespace std;

template <class Type1, class Type2>
void myfunc(Type1 x, Type2 y)
{
	cout << x << " " << y << "\n";
}

int main() {
	
	myfunc(10, "hi");
	
	myfunc(0.23, 10L);
}