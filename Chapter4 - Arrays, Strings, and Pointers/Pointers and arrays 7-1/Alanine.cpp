using namespace std;

int main() {
	int nums[10];

	int *integer_pointer;

	for (int i = 0; i < 10; i++) {

		*nums = i;     // This is ok.

		nums++;        // Error -- cannot modify nums. 
	}

}