#include <iostream>
#include <vector>
using namespace std;

void show(vector<int> v);

int main() {

	vector<int> v();   // An empty vector.
	vector<int> v2;    // An empty vector.

	vector<int> v3(5, 3);   // Constructs a vector that has 5 elements with the value of 3.

	show(v3);

}

void show(vector<int> v) {

	vector<int>::iterator itr;

	for (itr = v.begin(); itr != v.end(); itr++)
		cout << *itr << " ";
	
	cout << endl;
}