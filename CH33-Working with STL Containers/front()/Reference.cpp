#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

	vector<int> vector_of_integer;

	vector<int>::iterator itr;

	itr = vector_of_integer.begin();

	itr = vector_of_integer.insert(itr, 2);

	vector_of_integer.push_back(5);

}