#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(255);

	show_binary(238);

	show_binary(99);
}


void show_binary(unsigned int u) {

	printf("%d \n", u & 255);
}