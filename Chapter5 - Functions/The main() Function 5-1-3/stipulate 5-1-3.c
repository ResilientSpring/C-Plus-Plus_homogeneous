

int main(int argc, char** argv) { // argv is a pointer to an array of character pointers.[1]
								  // argv is an  array of an array of character. 
								  // argv is a pointer to pointers to string.
								  // argv is a pointer to an array of character strings.[2]


//	char* an_array_of_char_pointers[] = "";

	char* an_array_of_char_pointers2[] = { "rudiment", " means ", "basic. \n" };

	// Now, declare a pointer to an array of character pointers.
	char** a_pointer_to_an_array_of_character_pointers;

	a_pointer_to_an_array_of_character_pointers = an_array_of_char_pointers2;

	a_pointer_to_an_array_of_character_pointers = &an_array_of_char_pointers2[0];

	printf("%s \n.", a_pointer_to_an_array_of_character_pointers);

}

char* an_array_of_char_pointers3[];


// References:
// 1. C++ : A Beginner's Guide
// 2. The C Programming Language