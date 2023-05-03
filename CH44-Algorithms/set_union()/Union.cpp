#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void println(vector<int> const &v)
{
    for (int i : v)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    vector<int> v1, v2, dest;

    v1 = { 1, 2, 3, 4, 5 };
    v2 = { 3, 4, 5, 6, 7 };

    set_union(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), back_inserter(dest));
    
    println(dest);

    dest.clear();

    v1 = { 1, 2, 3, 4, 5, 5, 5 };
    v2 = { 3, 4, 5, 6, 7 };

    set_union(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), back_inserter(dest));

    println(dest);
}

// Adapted from: https://en.cppreference.com/w/cpp/algorithm/set_union