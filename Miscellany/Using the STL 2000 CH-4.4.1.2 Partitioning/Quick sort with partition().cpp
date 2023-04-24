#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


void QuickSort(int *first, int *last) {

	int len;
	int *pivot, *second, *splitPoint;

	len = distance(first, last);

	if (len < 2)
		return;

	if (len == 2) {
		second = first;
		second++;

		if (*first > *second)
			iter_swap(first, second);
	}

	pivot = adjacent_find(first, last, not_equal_to<int>());

}


int main() {



}