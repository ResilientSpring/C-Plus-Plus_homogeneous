#include <iostream>
using namespace std;

int main() {

	double* pvalue;

	pvalue = new double;

	*pvalue = 29494.99;

	cout << "Value of pvalue: " << *pvalue << endl;

	char* pointer_value;

	pointer_value = new char[20];

	delete[] pointer_value; 

	double** value_of_pointer;

	value_of_pointer = new double[3][4];

	


	double* ptr_d;

	ptr_d = new double[][4];

}

// Reference: https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm