// set_intersection example
#include <iostream>     // std::cout
#include <algorithm>    // std::set_intersection, std::sort
#include <vector>       // std::vector
using namespace std;

int main() {
    int first[] = { 5,10,15,20,25 };
    int second[] = { 50,40,30,20,10 };
    vector<int> v(10);                      // 0  0  0  0  0  0  0  0  0  0
    vector<int>::iterator it;

    sort(first, first + 5);     //  5 10 15 20 25
    sort(second, second + 5);   // 10 20 30 40 50

    it = set_intersection(first, first + 5, second, second + 5, v.begin());
    // 10 20 0  0  0  0  0  0  0  0
    v.resize(it - v.begin());                      // 10 20

    cout << "The intersection has " << (v.size()) << " elements:\n";
    for (it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}

// Adapted from: https://cplusplus.com/reference/algorithm/set_intersection/