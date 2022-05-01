#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <new>
#include <iomanip>
using namespace std;

// A class that encapsulates a help system.
class Help {
public:
	void helpOn(char what);
	void showMenu();
	bool isValid(char ch);
};

// Display help information.
void Help::helpOn(char what) {
	switch (what)
	{
	case '1':
		cout << "The if: \n\n";
		cout << "if(condition) statement;\n";
		cout << "else statement; \n";
		break;

	case '2':
		cout << "The switch:\n\n";
		cout << "switch (expression) {\n";
		cout << "   case constant:\n";
		cout << "     statement sequence\n";
		cout << "     break;\n";
		cout << "   // ...\n";
		cout << "}\n";
		break;
	case '3':
		cout << "The for: \n\n";
		cout << "for(init; condition; increment)";
		cout << " statement;\n";
		break;
	case '4':
		cout << "The while:\n\n";
		cout << "while(condition) statement; \n";
		break;
	case '5':
		cout << "The do-while:\n\n";
		cout << "do {\n";
		cout << "  statement; \n";
		cout << "} while (condition); \n";
		break;
	case '6':
		cout << "The break: \n\n";
		cout << "break;\n";
		break;
	case '7':
		cout << "The continue: \n\n";
		cout << "continue; \n";
		break;
	case '8':
		cout << "The goto:\n\n";
		cout << "goto label; \n";
		break;
	default:
		break;
	}
	cout << "\n";
}

// Show the help menu
void Help::showMenu() {
	cout << "Help on: \n";
	cout << " 1. if\n";
	cout << " 2. switch \n";
	cout << " 3. for \n";
	cout << " 4. while\n";
	cout << " 5. do-while\n";
	cout << " 6. break \n";
	cout << " 7. continue \n";
	cout << " 8. goto \n";
	cout << "Choose one (q to quit): ";
}

// Return true if a selection is valid.
bool Help::isValid(char ch)
{
	if (ch < '1' || ch > '8' && ch != 'q')
	{
		return false;
	} else 
		return true;
}

int main() {
	char choice;
	Help help_object;  // create an instance of the Help

	// Use the Help object to display information.
	for (; ; )
	{
		do {
			help_object.showMenu();
			cin >> choice;
		} while (!help_object.isValid(choice));

		if (choice == 'q')
		{
			break;
		}

		cout << "\n";

		help_object.helpOn(choice);
	}

	return 0;
}