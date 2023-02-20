#include <iostream>
using namespace std;

int main() {
	int crash[10];

	for (int i = 0; i < 100; i++)
		crash[i] = i;

	
	for (int i = 0; i < sizeof(crash) / sizeof(crash[0]); i++)
		cout << crash[i] << " ";
}