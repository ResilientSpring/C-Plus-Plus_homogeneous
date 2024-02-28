#include <iostream>
#include <map>
#include <any>
using namespace std;

int main() {


	map<string, map<string, any>> states;   // [1][2][3]

	states["Ohio"]["population"] = 11353140;  // [4]

//	cout << states["Ohio"]["population"] << endl;

	map<string, map<string, any>>::iterator itr;
	map<string, any>::iterator itr2;

	for (itr = states.begin(); itr != states.end(); itr++)
	{
		//cout << "Key: " << itr->first << ", Value: " << itr->second << endl; itr->second cotains a map.
		cout << "Key: " << itr->first << endl;

		for (itr2 = itr->second.begin(); itr2 != itr->second.end(); itr2++)
			cout << itr2->first << " " << itr2->second << endl;
	}

}

/*
* References:
* 1. https://stackoverflow.com/questions/24702235/c-stdmap-holding-any-type-of-value
* 2. https://stackoverflow.com/questions/68872633/is-there-a-way-to-store-auto-value-in-c-map
* 3. https://stackoverflow.com/questions/54668866/visual-studio-2017-cant-find-stdvariant
* 4. https://stackoverflow.com/questions/4479017/storing-std-map-in-map
*/