#include <iostream>
#include <vector>
using namespace std;

void show(const char *message, vector<int> v);

int main() {

	vector<int> v;

	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);
	v.push_back(10);

	show("The content of vector v: ", v);

	vector<int> *v_p;

	v_p = &v[2];    // There is not such pointer operation in vector under C++
}

void show(const char *message, vector<int> v) {

	cout << message << endl;

	vector<int>::iterator itr;

	for (itr = v.begin(); itr != v.end(); itr++)
		cout << *itr << " ";

	cout << endl << endl;

}