// Demonstrate search()

#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	deque<string> log;
	deque<string> break_in;
	deque<string>::iterator itr;

	// Create a sequence of three invalid password responses.
	break_in.push_back("invalid password");
	break_in.push_back("password reprompt ");
	break_in.push_back("invalid password");
	break_in.push_back("password reprompt ");
	break_in.push_back("invalid password");

	// Create some log entries.
	log.push_back("log-on OK");
	log.push_back("invalid password");
	log.push_back("password reprompt ");
	log.push_back("log-on OK");
	log.push_back("Connection failed");
	log.push_back("log-on OK");
	log.push_back("log-on OK");
	log.push_back("invalid password");     // Match break-in's sequence 1
	log.push_back("password reprompt ");   // Match break-in's sequence 2
	log.push_back("invalid password");     // Match break-in's sequence 3
	log.push_back("password reprompt ");   // Match break-in's sequence 4
	log.push_back("invalid password");     // Match break-in's sequence 5
	log.push_back("port conflict");
	log.push_back("log-on OK");


	cout << "Here is the break-in: \n";

	for (itr = break_in.begin(); itr != break_in.end(); itr++)
		cout << *itr << " " << endl;

	cout << endl;


	cout << "Here is the log: \n";

	for (itr = log.begin(); itr != log.end(); itr++)
		cout << *itr << " " << endl;

	cout << endl;

	// Call search, passing in iterators to the start and end of the range to search and
	// iterators to the start and end of the sequence to find.
	itr = search(log.begin(), log.end(), break_in.begin(), break_in.end());

	if (itr != log.end())
		cout << "Possible attempted break-in found.\n";
	else
		cout << "No repeated password failures found.\n";

}