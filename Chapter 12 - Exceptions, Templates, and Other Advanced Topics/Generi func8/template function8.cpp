#include <iostream>
using namespace std;

void swapargs(X a, X b);

int main() {

}


template<class X>
void swapargs(X a, X b) {
	
	X intermediary;
	intermediary = a;
	a = b;
	b = intermediary;
}
