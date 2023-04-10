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
}

void show(const char *message, vector<int> v) {

	cout << message << endl;

	vector<int>::iterator itr;

	for (itr = v.begin(); itr != v.end(); itr++)
		cout << *itr << " ";

	cout << endl << endl;

}