#include <iostream>
using namespace std;

int main() {

}


template<class X>
void swapargs(X a, X b) {
	
	X intermediary;
	intermediary = a;
	a = b;
	b = intermediary;
}
