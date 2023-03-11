// Demonstrate vector.

#include <iostream>
#include <vector>
using namespace std;

void show(const char* message, vector<int> vec);

int main() {

	// Declare a vector that has an initial capacity of 10.
	vector<int> v(10);

	// Assign its elements some values. 
	for (unsigned i = 0; i < v.size(); ++i)
		v[i] = i * i;

	show("Contents of v: ", v);

	// Compute the average of the values.
	int sum = 0;
	for (unsigned i = 0; i < v.size(); ++i)
		sum += v[i];

	double average = sum / v.size();

	cout << "The average of the element is " << average << endl << endl;


	// Add elements to the end of v.
	v.push_back(100);
	v.push_back(121);

	show("v after pushing elements onto the end: ", v);

}


void show(const char *message, vector<int> vec) {

	cout << message;

	vector<int>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";

	cout << endl;
}