#include <iostream>
using namespace std;

int main() {

	char multidimensional_array[10][6][4][9];


	multidimensional_array[0][0][0][0] = 'g';
	multidimensional_array[0][0][0][1] = 'r';
	multidimensional_array[0][0][0][2] = 'a';
	multidimensional_array[0][0][0][3] = 'b';
	multidimensional_array[0][0][0][4] = ' ';

	multidimensional_array[0][0][1][0] = 'h';
	multidimensional_array[0][0][1][1] = 'o';
	multidimensional_array[0][0][1][2] = 'l';
	multidimensional_array[0][0][1][3] = 'd';
//	multidimensional_array[0][0][1][4] = '';
	multidimensional_array[0][0][1][4] = ' ';

	multidimensional_array[4][4][3][4] = 'o';
	multidimensional_array[4][4][3][5] = 'f';

	for (int i = 0; i < 5; i++)
		cout << multidimensional_array[0][0][0][i];

	cout <<' ';

	for (int i = 0; i < 5; i++)
		cout << multidimensional_array[0][0][1][i];

	cout << " ";

	for (int i = 4; i <= 5; i++)
		cout << multidimensional_array[4][4][3][i];

	cout << endl;

	cout << "The size of this multidimensional array is ";
	cout << sizeof multidimensional_array << " bytes." << endl;



	///////////////////////////////////////////////////////////////

	char multidimensional_array_2[10][10][10][10];
	cout << "The size of this multidimensional array_2 is ";
	cout << sizeof multidimensional_array_2 << " bytes." << endl;

	
	///////////////////////////////////////////////////////////////


	int multidimensional_array_3[2][4][6][8];

	cout << endl;

	cout << "The size of this multidimensional array_3 is ";
	cout << sizeof multidimensional_array_3 << " bytes." << endl;
}