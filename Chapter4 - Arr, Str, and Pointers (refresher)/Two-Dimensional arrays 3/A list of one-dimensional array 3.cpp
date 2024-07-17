#include <iostream>
using namespace std;

int main() {

	int nums[3][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			nums[i][j] = (i * 4) + j + 1;

			printf("%d ", nums[i][j]);
		}

		printf("\n");
	}

	printf("\n %d \n", nums[12]);

	printf("\n %d \n", nums[0]);
}