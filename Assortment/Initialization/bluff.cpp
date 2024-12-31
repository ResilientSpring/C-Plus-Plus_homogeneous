#include <stdio.h>

int main() {

	int i;

	printf("i is %d.\n", i);
	printf("i's memory address is %p.\n", &i);

	int* ip;

	printf("ip's memory address is %p .\n", &ip);

	struct Node {

		char* name;

		struct Node* next;

	};


}