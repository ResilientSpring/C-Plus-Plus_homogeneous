#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{ 2, 4, 6, 8, 10 };

	cout << *(v.begin() + 4);


}