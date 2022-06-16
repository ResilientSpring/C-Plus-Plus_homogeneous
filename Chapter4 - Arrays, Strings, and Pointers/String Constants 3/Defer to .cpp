#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
	char* ptr;
	char dispassionate[] = "Pointers add power to C++. \n";

	ptr = dispassionate;

	printf("%p", ptr);  // Print the memory address of the first element of the character array dispassionate.
}