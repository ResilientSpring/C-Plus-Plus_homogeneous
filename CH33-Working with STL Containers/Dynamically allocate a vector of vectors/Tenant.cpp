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



	vector<int> *v3 = new vector<int>;
	v3[0] = v2;

	vector<vector<int>> *v4 = new vector<vector<int>>;

	vector<int> *v5 = new vector<int>;

	v5->push_back(1);
	v5->push_back(3);
	v5->push_back(5);

	v4->push_back(*v5);
}