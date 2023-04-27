// Using partition() and equal_range() to find duplicates of a value in a range

#include <iostream>                              // For standard streams
#include <list>                                  // For list container
#include <algorithm>                             // For copy(), partition()
#include <iterator>                              // For ostream_iterator

int main() {

	std::list<int> values{ 17, 11, 40, 13, 22, 54, 48, 70, 22, 61, 82, 78, 22, 89, 99, 92, 43 };

	// Output the elements in their original order
	std::cout << "The elements in the original sequence are:\n";
	std::copy(std::begin(values), std::end(values), std::ostream_iterator<int> {std::cout, " "});
	std::cout << std::endl;


}

// Source: https://github.com/Apress/using-cpp-standard-template-libraries/blob/master/Chapter%206/Ex6_05.cpp