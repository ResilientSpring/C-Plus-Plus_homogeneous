// From book <Using the C++ Standard Template Libraries (annotated)>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	vector<double> temperatures{ 65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50 };
	vector<double> low_t;    // Stores below average temperatures
	vector<double> high_t;   // Stores average or above temperatures

	copy(begin(temperatures), end(temperatures), ostream_iterator<double>{cout, " "});

	cout << endl;

	auto average = accumulate(begin(temperatures), end(temperatures), 0.0) / temperatures.size();

	cout << endl << "Average temperature: " << average << endl << endl;

	partition_copy(begin(temperatures), end(temperatures), back_inserter(low_t), 
		back_inserter(high_t), [average](double t) {return t < average; });

	copy(begin(low_t), end(low_t), ostream_iterator<double>{cout, " "});

	cout << endl;

	copy(begin(high_t), end(high_t), ostream_iterator<double>{cout, " "});

	cout << endl;
}