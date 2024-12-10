int main() {

	char* lineptr[50];

	lineptr[0] = "pointers in a pointer array";
	lineptr[1] = "qsort expects an array of pointers, ";
	lineptr[2] = " two integers, and a function with two pointer arguments.";


	char* FileName = "Hey.txt";
	char FileName2[] = "Hey.txt";

	if (FileName == FileName2)
		printf("char* FileName == char FileName2[] \n");
}