// Index a pointer as if it were an array.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
	char* p;
	int i;

	char str[80] = "This Is A Test";
	printf("Original string: %s \n", str);

	// p now holds the memory address of the first element in the character array.  p[i] = str[i]
	p = str;
	/* Logic: 
	*  str contains the memory address of the array's first element.
	*  p also contains the memory address of the array's first element.
	*  
	*  If attaching [i] to str, i.e. str[i], makes it return to a typical array, then attaching [i] to p must
	*  be the same.
	* 
	*  p = str ;
	*  p[i] = str[i];
	* 
	*/

	
	for (i = 0; i < p[i]; i++)
	{
		if (isupper(p[i]))
			p[i] = tolower(p[i]);
		else if (islower(p[i]))       // Access p as if it were an array.
			p[i] = toupper(p[i]);
	}

	printf("Inverted-case string: %s \n", str);

}