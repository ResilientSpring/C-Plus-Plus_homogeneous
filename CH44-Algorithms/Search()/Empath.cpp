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
	log.push_back("invalid password");
	log.push_back("password reprompt ");
	log.push_back("invalid password");
	log.push_back("password reprompt ");
	log.push_back("invalid password");
	log.push_back("port conflict");	
	log.push_back("log-on OK");




}