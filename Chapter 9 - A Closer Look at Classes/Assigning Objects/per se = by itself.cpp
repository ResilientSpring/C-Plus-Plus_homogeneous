// Demonstrate object assignment.

#include <iostream>
using namespace std;

class Test {
	int a, b;

public:

	void set_ab(int a, int b) {

		this->a = a;
		this->b = b;

	}

	void show_ab() {
		cout << "a is " << a << endl;
		cout << "b is " << b << endl;
	}
};


int main() {

	Test ob1, ob2;

	ob1.set_ab(10, 20);
	ob2.set_ab(0, 0);
	cout << "ob1 before assignment: \n";
	ob1.show_ab();
	cout << "ob2 before assignment: \n";
	ob2.show_ab();
	cout << endl;

	ob2 = ob1;  // assign ob1 to ob2

	cout << "ob1 after assignment: \n";
	ob1.show_ab();
	cout << "ob2 after assignment: \n";
	ob2.show_ab();
	cout << endl;

	ob1.set_ab(-1, -1);  // change ob1.

	cout << "ob1 after changing ob1: \n";
	ob1.show_ab();
	cout << "ob2 after changing ob1: \n";
	ob2.show_ab();
}