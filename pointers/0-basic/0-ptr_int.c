/* GOAL
Access and Print a Variable Using a Pointer
You have an integer variable, say 42.

You create a pointer that stores the address of this variable.

You print the value using the pointer (by dereferencing it).

You also print the memory address itself.
*/

#include <stdio.h>

int n = 42;
int* ptr_n;

void main() {
    ptr_n = &n; //must be declared inside function
    printf("Value of number using pointer is: %d\n", *ptr_n); // %d - decimal, %i - integer
    printf("Value of pointer %p\n", &n); // %p is pointer
}
