#include <stdio.h>
using namespace std;

//void tray(IamBaseClass& c, Derived_Class& d);
//
//int main() {
//
//	IamBaseClass base;
//	Derived_Class child;
//
//	base.a = 1949;
//
//	child.a = 1952;
//
//	child.b = 1989;
//
//	tray(base, child);
//
//	printf("child's a is %d and b is %d.\n", child.a, child.b);
//}


class IamBaseClass {

public:

	int a;

};

class Derived_Class :public IamBaseClass {

public:

	int b;

};

void tray(IamBaseClass& c, Derived_Class& d) {

	d.a = c.a;

}

int main() {

	IamBaseClass base;
	Derived_Class child;

	base.a = 1949;

	child.a = 1952;

	child.b = 1989;

	tray(base, child);

	printf("child's a is %d and b is %d.\n", child.a, child.b);
}