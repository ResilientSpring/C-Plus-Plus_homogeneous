#include <functional>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

template<typename T> void print_queue(T &q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    std::cout << '\n';
}

int main() {
    
    priority_queue<int> q;

    for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        q.push(n);

    print_queue(q);

    priority_queue<int, vector<int>, greater<int> > q2;

    for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        q2.push(n);

    print_queue(q2);

    // Using lambda to compare elements.
    auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
    
    priority_queue<int, vector<int>, decltype(cmp)> q3(cmp);

    for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        q3.push(n);

    print_queue(q3);

}

// Source: https://web.archive.org/web/20151222072346/https://en.cppreference.com/w/cpp/container/priority_queue