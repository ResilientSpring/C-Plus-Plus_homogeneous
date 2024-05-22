#include <iostream>
using namespace std;

struct worker
{
	int no;
	char name[20];
	char sex;
	union { int day; int month; int year; }
	birth;
} w;

int main() {

	cout << sizeof(w) << endl;

}