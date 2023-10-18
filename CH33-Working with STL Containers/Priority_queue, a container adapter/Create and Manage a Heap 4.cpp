// Adapting from CH44-Algorithms/Create and Manage a Heap 4/ push_heap() 2.cpp
// https://github.com/ResilientSpring/C-Plus-Plus_homogeneous/blob/master/CH44-Algorithms/Create%20and%20Manage%20a%20Heap%204/push_heap()%202.cpp

#include <iostream>
#include <queue>
using namespace std;

int main() {

	priority_queue<char> priority_queue_of_char {'A', 'B', 'C', 'D', 'E'};

	priority_queue_of_char.push('F');

}