#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

bool comparison(double a);

double average;

int main() {

	vector<double> temperature{ 65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50 };
	vector<double> lower_than_average{};
	vector<double> equal_to_or_above_average{};

	copy(begin(temperature), end(temperature), ostream_iterator<double>{cout, " "});

	cout << endl;

	average = accumulate(temperature.begin(), temperature.end(), 0.0) / temperature.size();

	cout << endl << "Average temperature: " << average << endl << endl;

	partition_copy(temperature.begin(), temperature.end(), equal_to_or_above_average.begin(),
		lower_than_average.begin(), comparison);

	copy(begin(equal_to_or_above_average), end(equal_to_or_above_average), ostream_iterator<double>{cout, " "});

	cout << endl;

	copy(begin(lower_than_average), end(lower_than_average), ostream_iterator<double>{cout, " "});

	cout << endl;
}

bool comparison(double a) {

	if (a > average)
		return true;
	else
		return false;

}


// Note:
// 1. How to access variables in main() from other function?
// As explained in the comments, it is better to change the architecture of your program. 
// However, if you still want to opt for a simple solution, declare your x as in global scope. [1]


// Reference: 
// 1. https://stackoverflow.com/questions/60786249/how-to-access-variables-in-main-cpp-from-function-in-mainwindow-cpp