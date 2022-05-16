// Demonstrate inline.

#include <iostream>
using namespace std;

class c1 {
	int i;      // private by default.

public:
	int get_i();
	void put_i(int j);
};

inline int c1::get_i() {
	return i;
}

inline void c1::put_i(int j) {
	i = j;
}


int main() {
	c1 s;

	s.put_i(10);

	cout << s.get_i();

	return 0;
}