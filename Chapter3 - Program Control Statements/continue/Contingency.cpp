#include <iostream>
using namespace std;

int main() {
	int x;
	
	for (x = 0; x <= 100; x++)
	{
		if (x % 2)               // Continue the loop early when x is odd.
		{
			continue;
		}

		cout << x << " ";
	}

	return 0;
}