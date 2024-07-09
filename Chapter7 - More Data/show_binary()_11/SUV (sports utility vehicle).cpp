#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(255);

	show_binary(238);

	show_binary(99);
}


void show_binary(unsigned int u) {

	int i = u & 255;

	printf("%d \n", i<<0);
}