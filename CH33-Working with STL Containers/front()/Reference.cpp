#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void show(const char* message, vector<int> vect);

int main() {

	vector<int> vector_of_integer;

	vector<int>::iterator itr;

	itr = vector_of_integer.begin();

	itr = vector_of_integer.insert(itr, 2);

	vector_of_integer.push_back(5);

	show("The contents of this vector of integer: ", vector_of_integer);

}

void show(const char *message, vector<int> vect) {
	cout << message;
	vector<int>::iterator itr;

	for (itr = vect.begin(); itr != vect.end(); itr++)
		cout << *itr << " ";

	cout << "\n";
}