// Use reference parameters to create the swap() function.

#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main() {
	int i, j;

	i = 10;
	j = 20;

	cout << "Initial values of i and j: " << i << " " << j << endl;

	swap(i, j);   // Here, the addresses of i and j are automatically passed to swap().

	cout << "Swapped values of i and j: " << i << " " << j << endl;
}


/* Here, swap() is defined as using call-by-reference, not call-by-value. Thus, it can exchange
   the two arguments it is called with.
*/
void swap(int &x, int &y) {

	int temp;

	// Use references to exchange the values of the arguments.
	temp = x;
	x = y;     // Now, the exchange takes place automatically through the references.
	y = temp;
}
