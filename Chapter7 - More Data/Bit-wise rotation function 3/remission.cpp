#include <stdio.h>
#include <math.h> // needed for pow()

void show_binary(int decimal_number);
void show_binary_2(int decimal_number);
void show_binary_3(unsigned int decimal_number);
void show_binary_4(unsigned int decimal_number);
void show_binary_5(unsigned int decimal_number);
void show_binary_6(unsigned int decimal_number);
void show_binary_7(unsigned int decimal_number);
void show_binary_8(unsigned int decimal_number);
void show_binary_9(unsigned int decimal_number);
void rotate_left(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left);
void rotate_left_2(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left);
unsigned int rotate_left_3(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left);
unsigned int rotate_left_4(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left);

int main() {

	int test = 1024;

	show_binary_2(test);

//  int test2 = 2990936064; overflowed.[1]

	unsigned int test2 = 2990936064;

	show_binary_2(test2);

	unsigned int test3 = rotate_left_3(test2, 19);

	show_binary_2(test3);
	show_binary_3(test3);

	show_binary_4(test);
	show_binary_5(test);

	show_binary_6(test2);
	show_binary_6(test);

	int accomodation = pow(2, 31);
	printf("2 to the 31st power is %u.\n", accomodation);

	int salient = pow(2, 31);
	printf("2 to the 31st power is %d.\n", salient);

	unsigned int condensation = pow(2, 31);
	printf("2 to the 31st power is %u.\n", condensation);

	unsigned int tidal = pow(2, 31);
	printf("2 to the 31st power is %d.\n", tidal);

	show_binary_8(test2);
	show_binary_8(test);

	show_binary_9(test2);
	show_binary_9(test);

	unsigned int engender = rotate_left_3(test2, 2);
	show_binary_9(engender);
}


void show_binary(int decimal_number) {

	// decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 1111 1111 1111 1111    (65535)
	//------------------------
	//   0110 

	// if (decimal_number & 65535) is non-zero
	if (decimal_number & 65535) {


	}

}

void show_binary_2(int decimal_number) {

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 1000 0000 0000 0000    (32768)
	//------------------------
	//   0 

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 0100 0000 0000 0000    (16384)
	//------------------------
	//    1 

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{                // i > 0 because if the least bit is on, that bit stands for 1.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

	}

	printf("\n");
}

// Parameter type is unsigned, to be on the safe side, although the influence of sign bit may be zero.
void show_binary_3(unsigned int decimal_number) {

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 1000 0000 0000 0000    (32768)
	//------------------------
	//   0 

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 0100 0000 0000 0000    (16384)
	//------------------------
	//    1 

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{                // i > 0 because if the least bit is on, that bit stands for 1.
	  // int i, not unsigned int i, in that i is set to larger than 0.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

	}

	printf("\n");
}

// Output a space for every 4 digits.
void show_binary_4(unsigned int decimal_number) {

	int counter = 0;

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{                // i > 0 because if the least bit is on, that bit stands for 1.
	  // int i, not unsigned int i, in that i is set to larger than 0.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4)
			printf(", ");

	}

	printf("\n");
}

// Output a space for every 4 digits. (Refined show_binary_4() .)
void show_binary_5(unsigned int decimal_number) {

	int counter = 0;

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{                // i > 0 because if the least bit is on, that bit stands for 1.
	  // int i, not unsigned int i, in that i is set to larger than 0.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4) {

			printf(", ");

			counter = 0;

		}

	}

	printf("\n");
}

// To show all 32 bits of an unsigned int, rather than just the first eight, 
// i in for loop must be 2 to the 31st power.
void show_binary_6(unsigned int decimal_number) {

	int counter = 0;

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = pow(2, 31); i > 0; i = i >> 1)
	{                     // i > 0 because if the least bit is on, that bit stands for 1.
	  // int i, not unsigned int i, in that i is set to larger than 0.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4) {

			printf(", ");

			counter = 0;

		}

	}

	printf("\n");
}

// To show all 32 bits of an unsigned int, rather than just the first eight, 
// i in for loop must be 2 to the 31st power. 
void show_binary_7(unsigned int decimal_number) {

	int counter = 0;

	//Substitute 2147483648 for pow(), given that show_binary_6() unexpectedly printed blank.
	for (int i = 2147483648; i > 0; i = i >> 1)
	{                     
	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4) {

			printf(", ");

			counter = 0;

		}

	}

	printf("\n");
}

// To show all 32 bits of an unsigned int, rather than just the first eight, 
// i in for loop must be 2 to the 31st power. 
void show_binary_8(unsigned int decimal_number) {

	int counter = 0;

	for (unsigned int i = 2147483648; i > 0; i = i >> 1)
	{                              
	  // unsigned int i, because 2147483648 overflowed int i.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4) {

			printf(", ");

			counter = 0;

		}

	}

	printf("\n");
}

// To show all 32 bits of an unsigned int, rather than just the first eight, 
// i in for loop must be 2 to the 31st power. 
void show_binary_9(unsigned int decimal_number) {

	int counter = 0;

	// Substitute pow() for 2147483648 in order to see if show_binary_6()'s problem of printing blank persits.
	for (unsigned int i = pow(2, 31); i > 0; i = i >> 1)
	{                             

	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

		counter++;

		if (counter == 4) {

			printf(", ");

			counter = 0;

		}

	}

	printf("\n");
}

// unsigned int is chosen because dealing with negative integers involves one's and two's complements.
void rotate_left(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left) {

	// long long is employed because it is larger than int.[1]
	long long holder = the_integer_to_rotate_left;

}

// unsigned int is chosen because dealing with negative integers involves one's and two's complements.
void rotate_left_2(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left) {

	// unsigned long long is employed because it is larger than unsigned int.[1]
	unsigned long long holder = the_integer_to_rotate_left;

	for (int i = 0; i <= how_many_times_to_rotate_left; i++)
	{
		holder = holder << 1;

		// pow()'s return type is double but bit-wise operations cannot be used on double.[2]
//      if (holder & pow(2, 31))
//	      holder = holder | 1;
	}

}

// unsigned int is chosen because dealing with negative integers involves one's and two's complements.
unsigned int rotate_left_3(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left) {

	// unsigned long long is employed because it is larger than unsigned int.[1]
	unsigned long long holder = the_integer_to_rotate_left;

	for (int i = 0; i <= how_many_times_to_rotate_left; i++)
	{
		holder = holder << 1;

		// 4294967296 = 2 to the 32nd power.
		if (holder & 4294967296)  
			holder = holder | 1;
	}

	return holder;
	// return type is unsigned in that "unsigned" frees me from considering the influence of sign bit.
	// return type is int, not long long, in that what this function received is int, and that
	// returning a long long will not only expose the rationale behind the operation but also alter 
	// the returned int due to lengthened bit pattern.
}

// Print out the process of bit rotation in each step.
unsigned int rotate_left_4(unsigned int the_integer_to_rotate_left, int how_many_times_to_rotate_left) {

	// unsigned long long is employed because it is larger than unsigned int.[1]
	unsigned long long holder = the_integer_to_rotate_left;

	for (int i = 0; i <= how_many_times_to_rotate_left; i++)
	{
		holder = holder << 1;

		// 4294967296 = 2 to the 32nd power.
		if (holder & 4294967296)
			holder = holder | 1;
	}

	return holder;
	// return type is unsigned in that "unsigned" frees me from considering the influence of sign bit.
	// return type is int, not long long, in that what this function received is int, and that
	// returning a long long will not only expose the rationale behind the operation but also alter 
	// the returned int due to lengthened bit pattern.
}



// References:
// 1. https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170
// 2. https://www.programiz.com/c-programming/online-compiler/