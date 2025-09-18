# 🧠 Memory Management and Leaks in C

Memory management in C is manual, meaning the programmer is responsible for allocating and freeing memory. Proper handling is critical to avoid issues like memory leaks, segmentation faults, and undefined behavior. This guide covers dynamic memory allocation, common pitfalls, and techniques to detect and prevent leaks.

---

## 🔹 Types of Memory in C

| Memory Type     | Description                                      |
|-----------------|--------------------------------------------------|
| Stack           | Automatically managed; used for local variables  |
| Heap            | Manually managed; used for dynamic allocation    |
| Static/Global   | Allocated at program start; persists until end   |
| Code            | Stores compiled instructions                     |

---

## 🔸 Dynamic Memory Allocation

Dynamic memory is allocated from the heap using:

- `malloc(size)`: Allocates uninitialized memory
- `calloc(n, size)`: Allocates zero-initialized memory
- `realloc(ptr, new_size)`: Resizes previously allocated memory
- `free(ptr)`: Frees allocated memory

### 🔹 Example

```c
int *arr = malloc(5 * sizeof(int));
if (arr != NULL) {
    for (int i = 0; i < 5; i++) arr[i] = i;
    free(arr);
}
```

---

## ❗ Common Memory Issues

### 🔸 Memory Leak

Occurs when allocated memory is not freed, causing wasted resources.

```c
char *str = malloc(100);
// no free(str); → memory leak
```

### 🔸 Dangling Pointer

Accessing memory after it has been freed.

```c
int *ptr = malloc(sizeof(int));
free(ptr);
*ptr = 10;  // undefined behavior
```

### 🔸 Double Free

Calling `free()` on the same pointer more than once.

```c
free(ptr);
free(ptr);  // error
```

### 🔸 Invalid Free

Freeing memory not allocated by `malloc()` or similar.

```c
int x;
free(&x);  // invalid
```

---

## 🧪 Detecting Memory Leaks

### 🔹 Manual Tracking

Keep a record of all allocations and ensure each is freed.

### 🔹 Tools

- **Valgrind**: Detects leaks, invalid access, and memory errors
- **AddressSanitizer**: Compiler-based memory error detector
- **Static Analysis**: Tools like `clang-tidy`, `cppcheck`

```bash
valgrind ./program
```

---

## 🧠 Best Practices

- Always check if `malloc()` or `calloc()` returns `NULL`
- Match every allocation with a corresponding `free()`
- Set pointers to `NULL` after freeing to avoid dangling references
- Avoid using freed memory
- Use helper functions to encapsulate allocation and deallocation logic
- Prefer `calloc()` when zero-initialization is needed

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Allocate and Free
Write a program that allocates memory for an integer array, fills it with values, and frees the memory.

### ✅ Exercise 2: Detect Leak with Valgrind
Create a program that allocates memory but forgets to free it. Run Valgrind to detect the leak.

### ✅ Exercise 3: Prevent Dangling Pointer
Allocate and free memory. Set the pointer to `NULL` after freeing and verify safe behavior.

### ✅ Exercise 4: Reallocation
Use `realloc()` to expand a dynamically allocated array. Fill and print all values.

### ✅ Exercise 5: Double Free Error
Write a program that accidentally frees memory twice. Use a tool to detect the error.

### ✅ Exercise 6: Invalid Free
Attempt to free stack memory. Observe the compiler or runtime error.

### ✅ Exercise 7: Memory Usage Tracker
Implement a simple memory tracker that logs each allocation and deallocation.

### ✅ Exercise 8: Struct Allocation
Create a structure and allocate memory for it dynamically. Assign values and free the memory.

### ✅ Exercise 9: Nested Allocation
Allocate memory for a structure containing a pointer. Free both levels properly.

### ✅ Exercise 10: Leak-Free Linked List
Implement a linked list with dynamic memory. Ensure all nodes are freed before program exit.

