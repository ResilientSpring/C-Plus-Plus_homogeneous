#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

bool comparison(double a, double b);

int main() {

	vector<double> temperature{ 65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50 };

	copy(begin(temperature), end(temperature), ostream_iterator<double>{cout, " "});

	cout << endl;

	auto average = accumulate(temperature.begin(), temperature.end(), 0.0) / temperature.size();

	cout << endl << "Average temperature: " << average << endl << endl;

	partition(temperature.begin(), temperature.end(), comparison);

	copy(begin(temperature), end(temperature), ostream_iterator<double>{cout, " "});

	cout << endl;
}

bool comparison(double a, double b) {

	if (a < b)
		return true;
	else
		return false;

}