#include <stdio.h>

void increment() {

    static int num = 0;

    num++;

    printf("%d", num);

}

int main() {

    increment();
    increment();
    return 0;
}