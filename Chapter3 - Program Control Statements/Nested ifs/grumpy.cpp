#include <iostream>
using namespace std;

int main() {

	int i, j, k, result;

	i = 6;
	j = 1;
	k = 5;

	if (i) {
		if (j) result = 1;
		if (k) result = 2;
		else result = 3;   // this else is associated with if(k)
	}
	else
		result = 4;        // this else is associated with if(i)


	cout << "result: " << result << "\n";
}