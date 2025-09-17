/*
Pointer to Pointer (Double Pointer)
You have a pointer to an integer.

You create another pointer that stores the address of the first pointer.

You access the original value using the double pointer.
*/

#include <stdio.h>

int num = 123;
int* ptr_a;
int**  ptr_b;

int main() {
    ptr_a = &num;
    ptr_b = &ptr_a;

    /*
    ptr_a is a pointer to int, pointing to num.

    ptr_b is also declared as a pointer to int, but you're assigning it the address of ptr_a,
    which is actually of type int ** (pointer to pointer).
    */

    printf("Value num is: %d\n", num);
    printf("Address of num is %p:\n", &num);
    printf("Address of ptra_a is: %p\n", &ptr_a);
    printf("Address of ptr_b is %p:\n", &ptr_b);
    printf("Vaule ptr_b is: %d\n", **ptr_b); // You're dereferencing a pointer to a pointer as if it were a pointer to an int.
    return 0;
}
