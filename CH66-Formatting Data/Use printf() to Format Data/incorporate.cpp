#include <stdio.h>

int main() {

	_set_printf_count_output(1);  // [Note1]

	int i;

	printf("This is a test%n", &i);

	printf("%d \n", i);

}

// References:
//
// 1. https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/set-printf-count-output?view=msvc-170

// Notes:
//
// 1. Because of security reasons, support for the %n format specifier is disabled by default 
//    in printf and all its variants. If %n is encountered in a printf format specification, 
//    the default behavior is to invoke the invalid parameter handler as described 
//    in Parameter validation. [1]