/*
Swap Two Integers Using Pointers
You have two integers: a = 42, b = 99.

You write a function that takes pointers to a and b.

Inside the function, you swap their values using dereferencing.
*/

#include <stdio.h>

int a = 42; // variable declaration
int b = 99;
int temp; // temp without using pointer

int* ptr_a; // pointer declaration
int* ptr_b;

void main() {
    ptr_a = &a; //must be initilized here to know the compiler that pointer pointing to variable a with &a
    ptr_b = &b;

/* This swap only pointer address, not values itself.
    temp = ptr_b;
    ptr_b = ptr_a;
    ptr_a = temp;
*/

/* This swap variables using ponter
    temp = *ptr_b;
    *ptr_b = *ptr_a;
    *ptr_a = temp;
*/

// Advanced technique to swap variables with XOR

    *ptr_a = *ptr_a ^ *ptr_b;
    *ptr_b = *ptr_a ^ *ptr_b;
    *ptr_a = *ptr_a ^ *ptr_b;

/* Here is how XOR swap works
Each XOR operation cleverly encodes and decodes the values:

a = a ^ b → a now holds combined info of a and b
b = a ^ b → b becomes original a
a = a ^ b → a becomes original b

No extra memory is used—just bitwise operations.

1. If a and b refer to the same memory location, this will zero them out.
2. It's less readable than using a temporary variable.
3. Modern compilers optimize temp-variable swaps very well, so XOR isn't always faster.
*/

    printf("Swaped value of a: %d and b: %d.\n", *ptr_a, *ptr_b);
}
