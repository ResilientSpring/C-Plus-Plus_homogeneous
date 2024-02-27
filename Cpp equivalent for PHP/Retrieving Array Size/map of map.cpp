#include <iostream>
#include <map>
#include <any>
#include <string>
#include <variant>
using namespace std;

int main() {

	
	map<string, map<string, any>> states;   // [1][2][3]

	states["Ohio"]["population"] = 11353140;

}

/*
* References:
* 1. https://stackoverflow.com/questions/24702235/c-stdmap-holding-any-type-of-value
* 2. https://stackoverflow.com/questions/68872633/is-there-a-way-to-store-auto-value-in-c-map
* 3. https://stackoverflow.com/questions/54668866/visual-studio-2017-cant-find-stdvariant
*/