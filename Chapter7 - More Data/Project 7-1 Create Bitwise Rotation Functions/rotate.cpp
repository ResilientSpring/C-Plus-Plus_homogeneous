#include <iostream>
using namespace std;

// Left-rotate a byte n places.
unsigned char lrotate(unsigned char val, int n) {

	unsigned int t;

	t = val;

	for (int i = 0; i < n; i++)
	{
		t = t << 1;

		/*  If a bit shifts out, it will be in bit 8 of the integer t. 
		   
		    If this is the case, put that bit on the right side.		
		*/

		if (t & 256)
			t = t | 1;

	}

}


int main() {



}