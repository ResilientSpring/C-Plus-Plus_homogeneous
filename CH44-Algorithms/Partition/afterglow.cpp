// Using partition() and equal_range() to find duplicates of a value in a range

#include <iostream>                              // For standard streams
#include <list>                                  // For list container
#include <algorithm>                             // For copy(), partition()
#include <iterator>                              // For ostream_iterator
using namespace std;

int main() {

	list<int> values{ 17, 11, 40, 13, 22, 54, 48, 70, 22, 61, 82, 78, 22, 89, 99, 92, 43 };

	// Output the elements in their original order
	cout << "The elements in the original sequence are:\n";
	copy(begin(values), end(values), ostream_iterator<int> {cout, " "});
	cout << endl;


	int wanted{ 22 };  // What we are looking for

	// Partition the values with (value < wanted)
	partition(begin(values), end(values), [wanted](double value) { return value < wanted; });
	
	// Partition the values with !(wanted < value)
	partition(begin(values), end(values), [wanted](double value) { return !(wanted < value); });


	// Output the elements after partitioning
	cout << "The elements after partitioning are:\n";
	copy(begin(values), end(values), ostream_iterator<int> {cout, " "});
	cout << endl;


	auto pr = std::equal_range(begin(values), end(values), wanted);
	cout << "The lower bound for " << wanted << " is " << *pr.first << endl;
	cout << "The upper bound for " << wanted << " is " << *pr.second << endl;

	cout << "\nThe elements found by equal_range() are:\n";
	copy(pr.first, pr.second, ostream_iterator<int> {cout, " "});
	cout << endl;


}

// Source: https://github.com/Apress/using-cpp-standard-template-libraries/blob/master/Chapter%206/Ex6_05.cpp