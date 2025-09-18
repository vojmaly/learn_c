/* GOAL
Traverse an Array Using a Pointer
You have an array of 5 integers: [1, 2, 3, 4, 5].

Instead of using array indexing, you use a pointer to move through the array.

You print each value by incrementing the pointer.
*/

#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5};
int* ptr_arr = arr;

int main() { // This ensures portability and proper return to the operating system.
    // ptr_arr[i] is valid because pointer indexing works just like array indexing.
    for (int i = 0; i < 5; i++) {
        printf("Value of element in array indexed direcly arr[i]: %d is: %d\n", i, ptr_arr[i]);
    }

    // better solution
     for (int i = 0; i < 5; i++) {
        printf("Value of element in array indexed with pointer mathematic *(ptr_arr + i): %d is: %d\n", i, *(ptr_arr + i));
    }
    return 0; //This ensures portability and proper return to the operating system.
}
