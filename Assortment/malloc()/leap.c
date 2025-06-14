#include <stdio.h>
#include <stdlib.h>

void create_array() {
    
    char* arr = malloc(100);  // allocated on the heap
    
    if (arr != NULL) {
        arr[0] = 'A';
    }
}

int main() {

    char* my_array = arr;  // memory still exists here

    printf("%c\n", my_array[0]);      // prints 'A'

    free(my_array);  // don't forget to free heap memory!

    return 0;
}

// The rationale behind this work: https://chatgpt.com/c/6800a607-d350-8008-bfa5-2fa4deeb3bfb
