#include <iostream>
using namespace std;

int main() {

	double* pvalue;

	pvalue = new double;

	*pvalue = 29494.99;

	cout << "Value of pvalue: " << *pvalue << endl;


}

// Reference: https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm