#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	v.insert(v.begin(), 4, 8);

	cout << v.size();

}