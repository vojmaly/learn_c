# 🧠 Advanced Pointer Operations in C

Pointers in C are powerful tools that allow direct memory access, efficient data manipulation, and dynamic behavior. Beyond basic usage, advanced pointer operations include pointer arithmetic, pointer to pointer, dynamic memory allocation, function pointers, and pointers to arrays and structures. Mastering these techniques is essential for writing high-performance and flexible programs.

---

## 🔁 Pointer Arithmetic

Pointer arithmetic enables navigation through memory by incrementing or decrementing pointer values. This is especially useful when working with arrays.

### 🔹 Example: Array Traversal

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));  // Access elements using pointer arithmetic
    }
    return 0;
}
```

Valid operations include addition, subtraction, and comparison of pointers. These operations are type-aware, meaning pointer arithmetic accounts for the size of the data type.

---

## 🔗 Pointer to Pointer

A pointer to a pointer stores the address of another pointer. This is useful for dynamic memory management, multi-level data structures, and modifying pointers inside functions.

### 🔹 Example

```c
#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("Value: %d\n", **pp);  // Access value through double dereferencing
    return 0;
}
```

---

## 🧰 Dynamic Memory Allocation

Dynamic memory allocation allows memory to be allocated at runtime using functions like `malloc()`, `calloc()`, `realloc()`, and `free()`. Pointers are essential for managing this memory.

### 🔹 Example: Allocate Array

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);  // Release memory
    return 0;
}
```

Always check if memory allocation was successful and free memory when it's no longer needed to avoid memory leaks.

---

## 🧮 Function Pointers

Function pointers store the address of a function and allow dynamic invocation. They are useful for callbacks, event-driven programming, and implementing function tables.

### 🔹 Example

```c
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    void (*func_ptr)() = greet;
    func_ptr();  // Calls greet()
    return 0;
}
```

Function pointers can also be stored in arrays to create dynamic dispatch mechanisms.

---

## 🧵 Pointer to Array

Pointers can be used to access and manipulate arrays, including multidimensional arrays.

### 🔹 Example: 2D Array Access

```c
#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = matrix;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);
        }
    }
    return 0;
}
```

---

## 🧱 Pointer to Structure

Pointers can be used to access and manipulate structures efficiently. This is especially useful when passing structures to functions or working with dynamic data.

### 🔹 Example

```c
#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p1 = {"Alice", 30};
    struct Person *ptr = &p1;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    return 0;
}
```

Use the `->` operator to access structure members via a pointer.

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Pointer Arithmetic
Create an array of integers. Use pointer arithmetic to print each element and its memory address.

### ✅ Exercise 2: Pointer to Pointer
Declare an integer and a pointer to it. Then create a pointer to that pointer. Print the value using double dereferencing.

### ✅ Exercise 3: Dynamic Memory Allocation
Allocate memory for an array of integers using `malloc()`. Fill it with values and print them. Release the memory afterward.

### ✅ Exercise 4: Resize Memory Block
Use `realloc()` to expand a dynamically allocated array. Add new values and print the entire array.

### ✅ Exercise 5: Function Pointer Invocation
Create two functions with different messages. Use a function pointer to call each one dynamically.

### ✅ Exercise 6: Array of Function Pointers
Create an array of function pointers for basic arithmetic operations. Use them to perform calculations based on user input.

### ✅ Exercise 7: Pointer to 2D Array
Declare a 2D array and use a pointer to access and print its elements in matrix format.

### ✅ Exercise 8: Structure Manipulation
Define a structure and create a pointer to it. Modify its members using the pointer and print the updated values.

### ✅ Exercise 9: Array of Structures
Create an array of structures. Use pointers to iterate through the array and print each structure's data.

### ✅ Exercise 10: Pointer-Based Swap
Write a function that swaps two integers using pointers. Call it and print the swapped values.
