// Demonstrate recursion.

#include <iostream>
using namespace std;

int fact(int n);
int fact_(int n);


int main() {

}


// Iterative version
int fact(int n) {

	int answer;

	answer = 1;

	for (int t = 2; t <= n; t++)

		answer = answer * t;

	return answer;
}

// Iterative version
int fact_(int n) {

	int answer;

	answer = 1;

	for (int t = 2; t = n; t++)

		answer = answer * t;

	return answer;
}


// 
