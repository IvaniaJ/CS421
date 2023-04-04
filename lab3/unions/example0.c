#include <stdio.h>

/*Function that increments a number by one (addone)*/
void addone(int *n) {
    //n is the pointer here which point to a memory-address outside the function scope
    (*n)++; // this will effectively increment the value of n
}

int n;
printf("Before: %d\n", n);
addone(&n);
printf("After: %d\n", n);