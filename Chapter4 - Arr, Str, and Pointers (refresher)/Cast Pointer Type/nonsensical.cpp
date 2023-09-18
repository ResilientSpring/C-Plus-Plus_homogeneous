#include <iostream>
using namespace std;

int main()
{
    printf("sizes: double = %zu, long = %zu, int = %zu, char = %zu\n",
        sizeof(double), sizeof(long), sizeof(int), sizeof(char));

    double d;
    double *dp = &d;
    long *lp = (long *)&d;
    int *ip = (int *)&d;
    char *cp = (char *)&d;
    printf("dp == %p, lp == %p\nip == %p, cp == %p\n\n", dp, lp, ip, cp);

    d = 42.0;
    printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n",
        *dp, *lp, *ip, *cp);

    *ip = 4200;
    printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n",
        *dp, *lp, *ip, *cp);

    *cp = 42;
    printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n",
        *dp, *lp, *ip, *cp);

    return 0;
}

// Source: 
// https://github.com/Apress/pointers-c-programming/blob/main/Chapter%2004/pointers-and-types/interpretation.c


// Note:
// %p, where p means void* (pointer to void) in an implementation-defined format.
//
// Reference: https://en.wikipedia.org/wiki/Printf