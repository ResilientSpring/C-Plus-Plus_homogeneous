using namespace std;

int main() {
	int nums[10];

	for (int i = 0; i < 10; i++) {

		*nums = i;     // This is ok.

		*(nums + 3) = 100;
	}

}

/*

Although an array name without index attached generates a pointer constant (the memory address of the first 
element of the array), the array name can still take part in pointer-style expressions, as long as the memory
address itself is not modified.

*/
