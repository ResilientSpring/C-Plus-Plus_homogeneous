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
	copy(std::begin(values), std::end(values), std::ostream_iterator<int> {std::cout, " "});
	cout << std::endl;


	int wanted{ 22 };  // What we are looking for

	// Partition the values with (value < wanted)
	partition(begin(values), end(values), [wanted](double value) { return value < wanted; });
	
	// Partition the values with !(wanted < value)
	partition(begin(values), end(values), [wanted](double value) { return !(wanted < value); });

}

// Source: https://github.com/Apress/using-cpp-standard-template-libraries/blob/master/Chapter%206/Ex6_05.cpp