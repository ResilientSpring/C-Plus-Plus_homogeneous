

int main(int argc, char** argv) { // argv is a pointer to an array of character pointers.
								  // argv is an  array of an array of character. 


//	char* an_array_of_char_pointers[] = "";

	char* an_array_of_char_pointers2[] = { "" };

	char** a_pointer_to_an_array_of_character_pointers;

	a_pointer_to_an_array_of_character_pointers = an_array_of_char_pointers2;

	a_pointer_to_an_array_of_character_pointers = &an_array_of_char_pointers2[0];

	char an_array_of_characters[] = "an array of characters.";

	char an_array_of_an_array_of_characters[10][10] = {"The law ", "stipulates", " that "};

	int an_array_of_an_array_of_integers[5][2] = { {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10} };

	char** an_array_of_an_array_of_characters2 = { "The law "};
}

char* an_array_of_char_pointers3[];