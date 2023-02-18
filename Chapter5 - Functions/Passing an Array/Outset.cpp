#include <iostream>
using namespace std;

void display(int num[10]);

int main() {

}

// Print some numbers.
void display(int num[10]) {
	int i;

	for (i = 0; i < 10; i++)
		cout << num[i] << ' ';
}
