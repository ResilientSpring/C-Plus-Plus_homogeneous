#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

using gender = char;
using first = string;
using second = string;
using Name = tuple<first, second, gender>;

int main() {

	vector<Name> names{ make_tuple("Dan", "Old", 'm'), make_tuple("Ann", "Old", 'f'),
		make_tuple("Ed", "Old", 'm'), make_tuple("Jan", "Old", 'f'), make_tuple("Edna", "Old", 'f') };

	partition(names.begin(), names.end(), [](const Name &name) {return get<2>(name) == 'f'; });

	for (const auto &name : names)
		cout << get<0>(name) << " " << get<1>(name) << endl;

}