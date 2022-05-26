#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

const int maxQsize = 100;  // Define the size of the largest queue that can be created.

class Queue {
	char q[maxQsize];    // This array holds the queue.
	int size;            // maximum number of elements the queue can hold.
	int putloc, getloc;  // The put and get indices.
};

int main() {

}