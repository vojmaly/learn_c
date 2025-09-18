/*
Modify Array Elements Using a Pointer
You again use the array of 5 integers.

You use a pointer to change each element, for example, multiply each by 2.

You verify the changes by printing the updated array.
*/

#include <stdio.h>

int arr[] = {2, 4, 6, 8, 10};
int* ptr_arr = arr;

int main() {
    // this approach only print multiplied value instead of modify element 
    for (int i = 0; i < 5; i++) {
       printf("Element at index %d is multilplied by 2 in for loop, result: %d\n", i, *(ptr_arr + i) * 2);
    }

    // if you want modify elements do:
    for (int i = 0; i < 5; i++) {
     // *(ptr_arr + i) = *(ptr_arr + i) * 2; this can be done also:
        *(ptr_arr + i) *= 2; 
    }

    // print modified array
    for (int i = 0; i < 5; i++) {
       printf("Element at index %d have value: %d\n", i, *(ptr_arr + i));
    }
    return 0;
}
