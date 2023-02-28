using namespace std;

int main() {
	int nums[10];

	int *integer_pointer;


	integer_pointer = nums;

	for (int i = 0; i < 10; i++) {

		*integer_pointer = i;

		integer_pointer++; 
	}

}

/*

Array name without index attached = the memory address where this array begins.

Array name itself is not a pointer.

A pointer is a variable that can hold (the copy of other's) memory address.

*/