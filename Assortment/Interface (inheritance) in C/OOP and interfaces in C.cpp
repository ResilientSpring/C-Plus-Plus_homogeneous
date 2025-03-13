typedef enum classType {
    CLASS_A,
    CLASS_B
} classType;

typedef struct base {
    classType type;

} base;

typedef struct A {
    base super;
} A;

typedef struct B {
    base super;
} B;

void A_construct(A* me) {
    base_construct(&me->super);
    super->type = CLASS_A;
}

int base_foo(base* me) {
    switch (me->type) {
    case CLASS_A: return A_foo(me);
    case CLASS_B: return B_foo(me);
    default: assert(0), abort();
    }
}

// Source: https://stackoverflow.com/questions/6304794/oop-and-interfaces-in-c