// Refer to static variable through its class name.

#include <iostream>
using namespace std;


class Test {
public:
	static int num;
	void shownum() {
		cout << num << endl;
	};
};

int Test::num;  // define num

int main() {
	Test a, b;
}