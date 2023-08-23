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
}