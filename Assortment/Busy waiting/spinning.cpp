#include <iostream>
#include <Windows.h>
#include <thread>
using namespace std;

/* i is global, so it is visible to all functions. It makes use of the special
 * type atomic_int, which allows atomic memory accesses.
 */
atomic_int i = 0;

/* f1 uses a spinlock to wait for i to change from 0. */
static void *f1(void *p)
{
    int local_i;
    /* Atomically load current value of i into local_i and check if that value
       is zero */
    while ((local_i = atomic_load(&i)) == 0) {
        /* do nothing - just keep checking over and over */
    }

    printf("i's value has changed to %d.\n", local_i);
    return NULL;
}

static void *f2(void *p)
{
    int local_i = 99;
    Sleep(10);   /* sleep for 10 seconds */
    atomic_store(&i, local_i);
    printf("t2 has changed the value of i to %d.\n", local_i);
    return NULL;
}

int main()
{
    int rc;
    thread t1, t2;

    rc = pthread_create(&t1, NULL, f1, NULL);
    if (rc != 0) {
        fprintf(stderr, "pthread f1 failed\n");
        return EXIT_FAILURE;
    }

    rc = pthread_create(&t2, NULL, f2, NULL);
    if (rc != 0) {
        fprintf(stderr, "pthread f2 failed\n");
        return EXIT_FAILURE;
    }

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    puts("All pthreads finished.");
    return 0;
}

// Source: https://en.wikipedia.org/wiki/Busy_waiting

// References:
// 1. https://stackoverflow.com/questions/65322396/e0020-identifier-sleep-is-undefined-visual-studio-2019
// 2. https://stackoverflow.com/questions/57812529/is-there-an-stdthread-create-like-pthread-create