#include <iostream>
#include <list>
using namespace std;

template <class X>
void show(const char* message, list<X> listing) {

	cout << message << endl;

	list<x>::iterator itr;

	for (itr = listing.begin(); itr != listing.end(); itr++)
		cout << *itr << " ";

	cout << endl << endl;
}

int main() {

	list<int>   list_num;
	list<char>  list_char;

	list_num.push_back(2);
	list_num.push_back(3);
	list_num.push_back(1);
	list_num.push_back(20);

	list_char.push_back('2');
	list_char.push_back('3');
	list_char.push_back('1');
	list_char.push_back('20');

	show("Before default sort(): ", list_num);

}


bool my_sort() {

}

