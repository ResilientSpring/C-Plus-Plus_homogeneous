#include <iostream>
using namespace std;

int main() {

	int answer;

	answer = 7;

	// Which one of the following four C++ programms will be met with compiler error?


	// 1
	if (answer == 7)
		printf("correct");
	else
		printf("incorrect");


	cout << "\n";

	// 2
	printf(answer != 7 ? "correct" : "incorrect");

	cout << "\n";

	// 3
	// printf(answer < > 7 ? "correct" : "incorrect");


	// 4
	answer == 7 ? printf("correct") : printf("incorrect");

}