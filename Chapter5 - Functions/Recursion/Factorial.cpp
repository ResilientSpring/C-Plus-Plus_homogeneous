// Demonstrate recursion.

#include <iostream>
using namespace std;

int main() {

}


// Iterative version
int fact(int n) {

	int answer;

	answer = 1;

	for (int t = 1; t <= n; t++)

		answer = answer * t;

	return answer;
}