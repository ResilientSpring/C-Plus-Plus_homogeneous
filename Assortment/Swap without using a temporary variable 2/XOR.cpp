#include <iostream>
using namespace std;

void swap(int &c, int &d);

int main() {


	int a = 3, b = 4;


}

void swap(int &c, int &d) {

	c = c ^ d;
	d = c ^ d;
	c = c ^ d;

}