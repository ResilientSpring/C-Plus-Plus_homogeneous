// Use reference parameters to create the swap() function.

#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main() {

}


/* Here, swap() is defined as using call-by-reference, not call-by-value. Thus, it can exchange
   the two arguments it is called with.
*/
void swap(int &x, int &y) {
	
	int temp;

	// Use references to exchange the values of the arguments.
	temp = x;
	x = y;
	y = temp;
}
