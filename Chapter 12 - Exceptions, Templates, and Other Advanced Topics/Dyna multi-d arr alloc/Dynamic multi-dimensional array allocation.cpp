#include <iostream>
using namespace std;

int main() {

	double* pvalue;

	pvalue = new double;

	*pvalue = 29494.99;

	cout << "Value of pvalue: " << *pvalue << endl;

	char* pointer_value;

	pointer_value = new char[20];

	delete[] pointer_value;  // Without this line, pointer_value cannot be reused by others.

	double** pointer_value;  // Thanks to delete[] pointer_value, this name can be reused by others.

	pointer_value = new double[3][4];

}

// Reference: https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm