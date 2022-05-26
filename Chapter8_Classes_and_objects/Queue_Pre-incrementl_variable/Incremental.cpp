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

	// Get a character from the queue.
	char get() {

		if (getloc == putloc)
		{
			printf(" -- Queue is empty.");
			return 0;
		}

		++getloc;
		return q[getloc];
	}
};

int main() {
	Queue bigQ(100);
	Queue smallQ = Queue(4);

	char ch;
	int i;

	printf("Using bigQ to store the alphabet.\n");

	// put some numbers into bigQ.
	for (i = 0; i < 26; i++)
	{
		bigQ.put('A' + i);
	}

	// Retrieve and display elements from bigQ
	printf("Contents of bigQ: ");

	for (i = 0; i < 26; i++)
	{
		ch = bigQ.get();

		if (ch != 0)
		{
			printf("%c", ch);
		}
	}

	printf("\n\n");

	printf("Using smallQ to generate errors. \n");

	// Now, use smallQ to generate some errors.
	for (i = 0; i < 5; i++)
	{
		cout << "Attempting to store " << (char)('Z' - i);

		smallQ.put('Z' - i);

		printf("\n");
	}

	cout << "\n";

	// more errors on smallQ
	printf("Contents of smallQ: ");

	for (i = 0; i < 5; i++)
	{
		ch = smallQ.get();

		if (ch != 0)
		{
			printf("%c", ch);
		}
	}
	printf("\n");
}