#include <iostream>
#include <queue>
using namespace std;

int main() {

	priority_queue<int> priority_queue_of_integers;

	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 3, 2})
		priority_queue_of_integers.push(n);

}