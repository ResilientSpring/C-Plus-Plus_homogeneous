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
	cout << "Original vector: \n";

	for (auto var : v2)
		cout << var << " ";
	cout << endl << endl;


	vector<int> temp{ 2, 5, 9, 0, 3, 10 };


	/* Inserting the portion of temp vector in original vector.
	*   
	*  temp.begin() + 3 is starting iterator of vector to be copied. 
	*  temp.begin() + 5 is ending iterator of vector to be copied.
	*/

	v2.insert(v2.end(), temp.begin() + 2, temp.begin() + 5);

	// Printing the modified vector
	cout << "V2 after inserting the portion of temp vector: \n";

	for (auto var : v2)
		cout << var << " ";

	cout << endl;
}

void show(const char *message, vector<int> vec) {

	cout << message << endl;

	vector<int>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";


	cout << endl;

}