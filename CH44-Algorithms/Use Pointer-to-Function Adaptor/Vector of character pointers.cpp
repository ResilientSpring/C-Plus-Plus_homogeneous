// Use a pointer-to-function adaptor.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
using namespace std;

int main() {

	// A vector of character pointers that point to character strings (character arrays).
	vector<const char *> v;
	vector<char *>::iterator itr;

	v.push_back("One");

}