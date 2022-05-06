// Compute a running average of numbers entered by the user.

#include <iostream>
using namespace std;

int main() {

}

int running_avg(int i) {

	static int sum = 0, count = 0;

	sum = sum - i;

	count++;

	return sum / count;
}