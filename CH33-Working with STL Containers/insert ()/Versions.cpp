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

	vector<int>::iterator itr;
	
	itr = v.insert(v.end(), 5);

	show("Contents of v: ", v);


	cout << endl << endl;


	// Initializing the vector.
	vector<int> v2{ 1, 2, 3, 4, 5 };

	// Printing out the original vector.

}

void show(const char *message, vector<int> vec) {

	cout << message << endl;

	vector<int>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";


	cout << endl;

}