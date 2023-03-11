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

	cout << endl;

	// Now, use pop_back() to remove one element.
	v.pop_back();

	show("v after back-popping one element: ", v);
	cout << endl;

	cout << "The first and last element in v as pointed to by begin() and end()-1: \n" << *(v.begin()) << ", ";
	cout << *(v.end() - 1) << endl << endl;

	/* 
		Since v.end() stands for a memory address, 
		let's test if * and & not only applies to pointer but also memory address.	
	*/
	int test = 10;

	cout << *(&test) << endl;

	// Correction: v.end() actually returns an iterator that is akin to a pointer.


	cout << "The first and last element in v as pointed to by rbegin() and rend()-1: \n" << *(v.rbegin()) << ", ";
	cout << *(v.rend() - 1) << endl << endl;

}


void show(const char *message, vector<int> vec) {

	cout << message;

	vector<int>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";

	cout << endl;
}