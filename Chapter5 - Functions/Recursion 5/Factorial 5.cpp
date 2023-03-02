// Demonstrate recursion.

#include <iostream>
using namespace std;

int fact(int n);
int fact_(int n);
int factr(int n);
int factr_(int n);


int main() {

	// use recursive version
//	cout << "4 factorial is " << factr(4) << "        " << factr_(4) << endl;

	// use iterative version
	cout << "4 factorial is " << fact(4) << endl;
	
	cout << "4 factorial is " << fact_(4) << endl;

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


// Recursive version
int factr(int n) {

	int answer;

	if (n == 1)
		return 1;

	answer = factr(n - 1) * n;

	return answer;
}


// Recursive version
int factr_(int n) {

	int answer;

	if (n == 1)
		return 1;
	else
		return answer = factr_(n - 1) * n;
}
