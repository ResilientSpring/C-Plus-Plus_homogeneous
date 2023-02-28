using namespace std;

int main() {
	int nums[10];

	int *integer_pointer;


	integer_pointer = nums;

	for (int i = 0; i < 10; i++) {

		*integer_pointer = i;     // This is ok.

		integer_pointer++;        // Error -- cannot modify nums. 
	}

}