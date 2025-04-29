#include <stdio.h>

int main() {

	const char* str = "intricate";

	printf("%5.7s\n", str);
	//  %5.7s will display a string that will be at least five characters long 
	//  and will not exceed seven.

	str = "abc";

	printf("%5.7s\n", str);

	printf("%5s\n", str);

	printf("%3s\n", str);
	
}