// Adapting from CH44-Algorithms/Create and Manage a Heap 4/ push_heap() 2.cpp
// https://github.com/ResilientSpring/C-Plus-Plus_homogeneous/blob/master/CH44-Algorithms/Create%20and%20Manage%20a%20Heap%204/push_heap()%202.cpp

#include <iostream>
#include <queue>
using namespace std;

int main() {

//	priority_queue<char> priority_queue_of_char {'A', 'B', 'C', 'D', 'E'};

	priority_queue<char> priority_queue_of_char;

	priority_queue_of_char.push('A');
	priority_queue_of_char.push('B');
	priority_queue_of_char.push('C');
	priority_queue_of_char.push('D');
	priority_queue_of_char.push('F');

	cout << "Now, show the content of this priority queue: \n\n";

	while (!priority_queue_of_char.empty())
	{
		cout << priority_queue_of_char.top() << endl;

		priority_queue_of_char.pop();
	}

	// Well, I haven't found the way to better demonstrate "priority_queue, a container adapter, automatically 
	// maintains the elements in the container in order of priority." quoted from at the end of
	// the section [Create and Manage a Heap] in Chapter 4.
	// 

}