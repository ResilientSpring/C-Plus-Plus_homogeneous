#include <stdio.h>

char* create_array() {

    char arr[100];

    if (arr != NULL) {
        arr[0] = 'A';
    }

    return arr;
}

int main() {

    char* my_array = create_array();

    printf("%c\n", my_array[0]);      // prints 'A'

    return 0;
}

// The rationale behind this work: https://chatgpt.com/c/6800a607-d350-8008-bfa5-2fa4deeb3bfb
