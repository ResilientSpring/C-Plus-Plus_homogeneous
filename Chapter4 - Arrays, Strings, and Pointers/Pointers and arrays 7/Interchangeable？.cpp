using namespace std;

int main() {
	int nums[10];

	for (int i = 0; i < 10; i++) {

		*nums = i;     // This is ok.

		nums++;        // Error -- cannot modify nums. 
	}

}

/*
 nums++ refers to nums = nums +1;

 While an array name without an index does generate a pointer to the beginning of an array, it cannot be changed.

 Memory address is not a variable.

*/
