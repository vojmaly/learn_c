# 📌 Pointers in C

Pointers are one of the most powerful and essential features in C. They allow direct access to memory and enable dynamic memory management, efficient array handling, and complex data structures like linked lists. This guide provides a comprehensive explanation of pointers, complete with code examples and practical exercises to deepen your understanding.

---

## 🧠 What Is a Pointer?

A pointer is a variable that stores the memory address of another variable.

### 🔹 Declaration Syntax

```c
type *pointer_name;
```

### 🔹 Example

```c
int x = 10;
int *ptr = &x;  // ptr holds the address of x
```

- `&x` gives the address of variable `x`.
- `*ptr` accesses the value stored at that address.

---

## 📍 Pointer Operators

| Operator | Description                          |
|----------|--------------------------------------|
| `*`      | Dereference operator (access value)  |
| `&`      | Address-of operator (get address)    |

### 🔹 Example

```c
#include <stdio.h>

int main() {
    int num = 5;
    int *p = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value via pointer: %d\n", *p);
    return 0;
}
```

---

## 🧮 Pointer and Arrays

Pointers and arrays are closely related. The name of an array is a pointer to its first element.

### 🔹 Example

```c
int arr[3] = {10, 20, 30};
int *p = arr;

printf("%d\n", *p);     // 10
printf("%d\n", *(p+1)); // 20
```

---

## 🧵 Pointer to String

Strings in C are arrays of characters, so pointers can be used to manipulate them.

### 🔹 Example

```c
char *name = "Alice";
printf("%c\n", *name);     // A
printf("%c\n", *(name+1)); // l
```

---

## 🔄 Pointer to Pointer

A pointer to a pointer stores the address of another pointer.

### 🔹 Example

```c
int x = 100;
int *p = &x;
int **pp = &p;

printf("%d\n", **pp); // 100
```

---

## 🧾 Void Pointer

A `void *` pointer can hold the address of any data type. It must be cast before dereferencing.

### 🔹 Example

```c
void *ptr;
int x = 42;
ptr = &x;

printf("%d\n", *(int *)ptr);
```

---

## 🧠 Function Pointers

Pointers can be used to store addresses of functions and call them dynamically.

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

---

## 🧰 Dynamic Memory Allocation

Pointers are essential for allocating memory at runtime using:

- `malloc()`
- `calloc()`
- `realloc()`
- `free()`

### 🔹 Example

```c
#include <stdlib.h>

int *arr = (int *)malloc(5 * sizeof(int));
arr[0] = 10;
free(arr);
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Access and Print a Variable Using a Pointer  
**Task**:  
Declare an integer variable.  
Create a pointer that stores the address of the variable.  
Print the value using the pointer (dereferencing).  
Print the memory address stored in the pointer.

---

### ✅ Exercise 2: Swap Two Integers Using Pointers  
**Task**:  
Declare two integer variables.  
Write a function that takes pointers to both variables.  
Inside the function, swap their values using dereferencing.

---

### ✅ Exercise 3: Traverse an Array Using a Pointer  
**Task**:  
Declare an array of integers.  
Use a pointer to iterate through the array.  
Print each value by incrementing the pointer.

---

### ✅ Exercise 4: Modify Array Elements Using a Pointer  
**Task**:  
Use a pointer to access each element of an array.  
Modify each element (e.g., multiply by 2).  
Print the updated array to verify changes.

---

### ✅ Exercise 5: Pointer to Pointer (Double Pointer)  
**Task**:  
Declare a pointer to an integer.  
Create another pointer that stores the address of the first pointer.  
Access the original value using the double pointer.

---

### ✅ Exercise 6: Pass Array to Function Using Pointer  
**Task**:  
Pass an array to a function using a pointer.  
Inside the function, perform operations like summing all elements.  
Return the result to the main function.

---

### ✅ Exercise 7: Compare Two Values Using Pointers  
**Task**:  
Declare two integer variables.  
Use pointers to compare their values.  
Print which one is greater.

---

### ✅ Exercise 8: Count Even Numbers in Array Using Pointer  
**Task**:  
Declare an array of integers.  
Use a pointer to traverse the array.  
Count how many elements are even.

---

### ✅ Exercise 9: Find Maximum Value in Array Using Pointer  
**Task**:  
Declare an array of integers.  
Use a pointer to iterate through the array.  
Track and print the maximum value found.

---

### ✅ Exercise 10: Reset Array Elements to Zero Using Pointer  
**Task**:  
Declare an array of integers.  
Use a pointer to set each element to zero.  
Print the array to confirm all values are reset.

---

### ✅ Exercise 11: Void Pointer Usage  
**Task**:  
Declare a void pointer and assign it the address of an integer variable.  
Use typecasting to access and print the value.  
Demonstrate how void pointers can point to different data types.
