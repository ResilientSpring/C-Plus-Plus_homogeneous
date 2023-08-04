#include <iostream>
using namespace std;

int main() {

	char ch1, ch2;

	cout << "Input a character: (either A or B) ";
	cin >> ch1;

	cout << "Input another character: (either A or B) ";
	cin >> ch2;

	switch (ch1)
	{
	case 'A': cout << "This A is part of outer switch. \n";

		switch (ch2)
		{
		case 'A':
			cout << "This A is part of inner switch. \n";
			break;
		case 'B':
			cout << "This B is part of inner switch. \n";
			break;
		}

	case 'B': cout << "This B is part of outer switch. \n";

	}

}