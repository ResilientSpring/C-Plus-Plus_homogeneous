#include <iostream>
using namespace std;

int main() {

	int i = 8;

	int* single_indirection;

	single_indirection = &i;
	
	cout << "The value of single_indirection is " << single_indirection << "\n";

	cout << "The memory address of single_indirection is " << &single_indirection << "\n";

}

void LocateHandleBuffer(int multiple_indirection) {


}
