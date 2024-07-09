#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(255);

}


void show_binary(unsigned int u) {

	for (int i = 1; i <= 128; i *= 2)
		if (u & i)
			printf("1 ");
		else
			printf("0 ");

	printf("\n");
}