#include <iostream>
#include <vector>
using namespace std;

void show(const char *message, vector<int> vec);

int main() {

	vector<int> v;

	v.insert(v.begin(), 4, 8);

	cout << v.size();

	

	cout << endl << endl;


	show("Contents of v: ", v);



	cout << endl << endl;


	vector<int> v2;



}

void show(const char *message, vector<int> vec) {

	cout << message << endl;

	vector<int>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";


	cout << endl;

}