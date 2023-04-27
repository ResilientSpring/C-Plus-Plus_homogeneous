// Ex6_04.cpp
// Using partition_copy() to find values above average and below average
#include <iostream>                              // For standard streams
#include <vector>                                // For vector container
#include <algorithm>                             // For partition_copy(), copy()
#include <numeric>                               // For accumulate()
#include <iterator>                              // For back_inserter, ostream_iterator
using namespace std;

int main()
{
    vector<double> temperatures{ 65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50 };
    vector<double> low_t;                       // Stores below average temperatures
    vector<double> high_t;                      // Stores average or above temperatures

    auto average = accumulate(begin(temperatures), end(temperatures), 0.0) / temperatures.size();
    
    partition_copy(begin(temperatures), end(temperatures), back_inserter(low_t), back_inserter(high_t),
        [average](double t) { return t < average; });

    // Output below average temperatures
    copy(begin(low_t), end(low_t), ostream_iterator<double>{cout, " "});
    cout << endl;

    // Output average or above temperatures
    copy(begin(high_t), end(high_t), ostream_iterator<double>{cout, " "});
    cout << endl;
}

// Source: 
// https://github.com/Apress/using-cpp-standard-template-libraries/blob/master/Chapter%206/Ex6_04.cpp