// Demonstrate the sequence container adaptors.

#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main() {

	// Demonstrate queue.
	queue<string> queue_of_strings;

	cout << "Pushing one two three four \n";
	queue_of_strings.push("one");
	queue_of_strings.push("two");
	queue_of_strings.push("three");
	queue_of_strings.push("four");

	cout << "Now, retrieve those values in FIFO order. \n";

	while (!queue_of_strings.empty()) {

		cout << "Popping ";


		cout << queue_of_strings.front() << endl;

		queue_of_strings.pop();
	}
}