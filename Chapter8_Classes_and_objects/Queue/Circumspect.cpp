#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

const int maxQsize = 100;  // Define the size of the largest queue that can be created.

class Queue {
	char q[maxQsize];    // This size maxQsize array holds the queue.
	int size;    // maximum number of elements the queue can hold. (The actual size of the queue.)
	int putloc, getloc;  // The put and get indices.

public:
	// Construct a queue of a specific length.
	Queue(int length) {
		if (length > maxQsize)
		{
			length = maxQsize;
		}
		else if (length <= 0)
		{
			length = 1;
		}

		size = length;
		putloc = getloc = 0;
	}

	// Put a character into the queue.
	void put(char ch) {
		if (putloc == size)
		{
			printf(" -- Queue is full.");

			return;
		}

		putloc++;
		q[putloc] = ch;  // The new element is stored at the putloc-th element of the array q.
	}
};

int main() {

}