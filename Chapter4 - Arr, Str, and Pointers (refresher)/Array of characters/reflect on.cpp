#include <iostream>
using namespace std;

int main() {

	char array_of_characters[] = "access one character among the charactres.";
	char array_of_strings[][80] = { "string one", "string two", "string three" };


	cout << array_of_characters[0] << endl;
	cout << array_of_characters[1] << endl;
	cout << array_of_characters[2] << endl;
	cout << array_of_characters[3] << endl;
	cout << array_of_characters[4] << endl;
	cout << array_of_characters[5] << endl;
}