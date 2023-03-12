// Demonstrate map.

// This program creates a simple phone list in which a person's name is the key and the phone number 
// is the value.  Thus, you can look up a phone number given a name.

#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

void show(const char* message, map<string, string> mapper);

int main() {

	map<string, string> phone_map;

	// Insert elements by using operator[].
	phone_map["Tom"] = "555-1234";
	phone_map["Jane"] = "314 555-6576";
	phone_map["Ken"] = "660 555-9843";

	show("Here is the original map: ", phone_map);

}


void show(const char *message, map<string, string> mapper) {

	cout << message << endl;

	map<string, string>::iterator itr;

	for (itr = mapper.begin(); itr != mapper.end(); itr++)
		cout << itr->first << ", " << itr->second << endl;

	cout << endl;
}

