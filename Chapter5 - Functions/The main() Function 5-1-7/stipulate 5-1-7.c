#include <stdio.h>

int main(int argc, char** argv) { // argv is a pointer to an array of character pointers.[1]
	// argv is an  array of an array of character. 
	// argv is a pointer to pointers to string.
	// argv is a pointer to an array of character strings.[2]


	int a, b, c;

	int* d = &a;
	int* e = &b;
	int* f = &c;

	int* an_array_of_int_pointers[] = { d, e, f };

	// Now, declare a pointer to an array of int pointers.
	int** a_pointer_to_an_array_of_int_pointers;

	a_pointer_to_an_array_of_int_pointers = an_array_of_int_pointers;

	printf("%s \n", a_pointer_to_an_array_of_int_pointers[0]);   // print rudiment

	printf("%c \n", a_pointer_to_an_array_of_int_pointers[0][0]);  // print r

	printf("%c \n", *a_pointer_to_an_array_of_int_pointers[0]);  // print r

}

char* an_array_of_char_pointers3[];


// References:
// 1. C++ : A Beginner's Guide
// 2. The C Programming Language