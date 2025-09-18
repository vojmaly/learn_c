# 🧠 Dynamic Memory Allocation in C (`malloc`, `calloc`, `free`)

Dynamic memory allocation allows C programs to request memory during runtime, rather than relying solely on fixed-size arrays or variables. This is essential for handling variable-sized data, building flexible data structures, and optimizing memory usage.

---

## 🔹 Why Use Dynamic Memory?

- Allocate memory when the size is unknown at compile time
- Create data structures like linked lists, trees, and graphs
- Avoid wasting memory with oversized static arrays
- Enable memory reuse and efficient resource management

---

## 🔸 `malloc()` — Memory Allocation

`malloc()` stands for "memory allocation." It allocates a block of memory of a specified size and returns a pointer to the beginning of the block.

### 🔹 Syntax

```c
void* malloc(size_t size);
```

### 🔹 Example

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));  // allocate memory for 5 integers
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("%d ", arr[i]);
    }

    free(arr);  // release memory
    return 0;
}
```

> `malloc()` does not initialize memory; contents are indeterminate.

---

## 🔸 `calloc()` — Contiguous Allocation

`calloc()` allocates memory for an array of elements and initializes all bytes to zero.

### 🔹 Syntax

```c
void* calloc(size_t num, size_t size);
```

### 🔹 Example

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr = (int *)calloc(5, sizeof(int));  // allocate and zero-initialize
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // all elements are 0
    }

    free(arr);
    return 0;
}
```

> `calloc()` is useful when zero-initialization is required.

---

## 🔸 `free()` — Memory Deallocation

`free()` releases memory previously allocated by `malloc()` or `calloc()`. Failing to free memory leads to memory leaks.

### 🔹 Syntax

```c
void free(void *ptr);
```

### 🔹 Example

```c
int *data = (int *)malloc(100 * sizeof(int));
// use data...
free(data);  // release memory
```

> After calling `free()`, the pointer becomes invalid. Do not use it again unless reassigned.

---

## 🔸 `realloc()` — Resize Memory Block

`realloc()` changes the size of a previously allocated memory block.

### 🔹 Syntax

```c
void* realloc(void *ptr, size_t new_size);
```

### 🔹 Example

```c
int *arr = (int *)malloc(3 * sizeof(int));
arr = (int *)realloc(arr, 6 * sizeof(int));  // resize to hold 6 integers
```

> If `realloc()` fails, the original pointer remains valid. Always check the result before overwriting.

---

## 🧠 Best Practices

- Always check if memory allocation was successful (`ptr != NULL`)
- Use `sizeof(type)` for portability
- Free memory once it's no longer needed
- Avoid memory leaks by matching every `malloc()`/`calloc()` with a `free()`
- Set pointer to `NULL` after freeing to prevent dangling references

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Allocate Integer Array
Create a program that uses `malloc()` to allocate memory for an array of 10 integers. Fill the array with values and print them.

### ✅ Exercise 2: Zero-Initialized Array
Use `calloc()` to allocate memory for 5 floats. Print each value to verify zero-initialization.

### ✅ Exercise 3: Resize Array
Allocate memory for an array of 3 integers. Use `realloc()` to expand it to 6 integers. Fill and print all values.

### ✅ Exercise 4: Memory Leak Detection
Create a program that allocates memory but forgets to free it. Use a memory checker tool to detect the leak.

### ✅ Exercise 5: Free and Reuse Pointer
Allocate memory for a string. Free it and then reuse the pointer to allocate a new string. Print both strings.

### ✅ Exercise 6: Dynamic Matrix
Use `malloc()` to create a 2D matrix (array of pointers). Fill it with values and print the matrix.

### ✅ Exercise 7: Dynamic String Input
Prompt the user to enter a string. Use `malloc()` to allocate memory based on input length. Store and print the string.

### ✅ Exercise 8: Struct Allocation
Define a structure and use `malloc()` to allocate memory for it. Assign values to its members and print them.

### ✅ Exercise 9: Array of Structs
Use `calloc()` to allocate memory for an array of structures. Fill each structure with data and print the array.

### ✅ Exercise 10: Safe Reallocation
Allocate memory for an array. Use `realloc()` to shrink it. Ensure no data corruption and print the remaining elements.
