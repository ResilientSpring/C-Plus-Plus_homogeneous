// From book <Using the C++ Standard Template Libraries (annotated)>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	vector<double> temperatures{ 65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50 };

	copy(begin(temperatures), end(temperatures), ostream_iterator<double>{cout, " "});

	cout << endl;

	auto average = accumulate(begin(temperatures), end(temperatures), 0.0) / temperatures.size();

}