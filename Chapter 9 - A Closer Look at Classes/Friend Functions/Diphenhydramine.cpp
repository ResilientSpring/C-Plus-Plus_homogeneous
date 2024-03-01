#include <iostream>
using namespace std;

class MyClass {

	int a, b;

public:

	MyClass(int i, int j) {

		a = i;
		b = j;
	}

	friend int comDenom(MyClass x);  // comDenom is a friend of MyClass.

};

// Notice that comDenom() is not a member function of any class.
int comDenom(MyClass x) {

	// Because comDenom() is a friend of MyClass, it can directly access a and b.
	int max = x.a < x.b ? x.a : x.b;

	for (int i = 2; i <= max; i++)
		if ((x.a % i) == 0 && (x.b % i) == 0) return i;

}


int main() {

	MyClass n(18, 111);

	if (comDenom(n))
	{
		cout << "Common denominator is " << comDenom(n) << "\n";
	}

}