#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<vector<int>> v;

	vector<int> v2;

	v2.push_back(4);
	v2.push_back(6);
	v2.push_back(8);

	v.push_back(v2);

	cout << v[0][0];
}