#include <iostream>
using namespace std;

ostream& operator<<(ostream& stream, ThreeD obj);

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

}

// Display X, Y, Z coordinates - ThreeD inserters.
ostream& operator<<(ostream &stream, ThreeD obj) {

	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";

	return stream;
}
