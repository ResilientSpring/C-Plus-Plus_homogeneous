#include <iostream>
using namespace std;

int main() {

	char array_of_characters[] = "access one character among the charactres.";
	char array_of_strings[][80] = { "string one", "string two", "string three" };
	char array_of_string_[][80] = { {'s', 't', 'r', 'i', 'n', 'g', ' ', 'o', 'n', 'e'}, {'s', 't', 'r', 'i'} };

	cout << array_of_characters[0] << endl;
	cout << array_of_characters[1] << endl;
	cout << array_of_characters[2] << endl;
	cout << array_of_characters[3] << endl;
	cout << array_of_characters[4] << endl;
	cout << array_of_characters[5] << endl;

	cout << array_of_characters[6] << " " << array_of_characters[7] << array_of_characters[8];
	cout << array_of_characters[9] << " " << array_of_characters[10] << array_of_characters[11] << endl;

	cout << array_of_strings[0][0] << array_of_strings[0][7] << array_of_strings[1][8] << endl;
}