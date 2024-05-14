#include <iostream>
using namespace std;

int main() {

	int answer;

	answer = 7;

	if (answer == 7)
		printf("correct");
	else
		printf("incorrect");


	cout << "\n";

	printf(answer != 7 ? "correct" : "incorrect");

	cout << "\n";

	printf(answer < > 7 ? "correct" : "incorrect");

}