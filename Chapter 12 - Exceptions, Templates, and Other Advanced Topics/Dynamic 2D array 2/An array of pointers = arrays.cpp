#include <iostream>
using namespace std;

int main() {

	const int sizeX = 4;
	int sizeY = 3;

	int(*ary)[sizeX] = new int[sizeY][sizeX];


	ary[0][0] = 1;
	ary[0][1] = 2;
	ary[0][2] = 3;


	cout << ary[0][1] << endl;
}

// Reference: https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new/936709#comment744797_936687