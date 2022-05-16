#include <iostream>
using namespace std;

class c1 {
	int i;     // private by default.

public:

	// Automatic inline functions. (Define get_i() and put_i() inside their class.)
	int get_i() {
		return i;
	}

	void put_i(int j) {
		i = j;
	}

};