#include <iostream>
using namespace std;

ostream& operator<<(ostream &stream, ThreeD obj);

class ThreeD {
public:
	int x, y, z;  // 3-D coordinates

	ThreeD(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

int main() {

	ThreeD a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);

	cout << a << b << c;   // Use ThreeD inserter to output coordinates.

}

// Overload ostream's operator <<
ostream& operator<<(ostream &stream, ThreeD obj) {   // An inserter for ThreeD

	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";

	return stream;
}
