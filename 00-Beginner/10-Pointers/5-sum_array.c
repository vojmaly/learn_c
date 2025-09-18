/*
Pass Array to Function Using Pointer
You pass the array to a function using a pointer.

Inside the function, you perform operations like summing all elements.

You return the result to the main function.
*/

#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5, 6};
int* ptr_arr;


int sum(int input) {
    int ret_val = 0;
    int arr_lenght = sizeof(input) / *(input);
    for (int i = 0; i < arr_lenght; i++) {
     // ret_val = ret_val + input[i] same as under
        ret_val += *(input + i);
    }
    return ret_val;
}


int main() {
    ptr_arr = arr;
    printf("Sum aof elements in array using function is: %d\n", sum(*ptr_arr));
    return 0;
}
