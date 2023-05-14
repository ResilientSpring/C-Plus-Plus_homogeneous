#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1{ 7, 2, 3, 4, 5, 6, 7, 8 };
    vector<int> v2{ 5, 7, 9, 7 };
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> v_intersection;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v_intersection));

    for (int n : v_intersection)
        std::cout << n << ' ';
    std::cout << '\n';
}


// Adapted from: https://en.cppreference.com/w/cpp/algorithm/set_intersection