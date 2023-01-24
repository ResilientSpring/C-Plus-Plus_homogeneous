// Use a static instance variable.

#include <iostream>

using namespace std;

class ShareVar{
	static int num;  // Declare a static data member. It will be shared by all instances of ShareVar.

public:
	void setnum(int i) {
		num = i;
	}

	void shownum() {
		cout << num << " ";
	}
};

int ShareVar::num;

int main() {
	ShareVar a, b;

	a.shownum();
	b.shownum();

	a.setnum(10);    // Set static num to 10.

	a.shownum();
	b.shownum();

}

