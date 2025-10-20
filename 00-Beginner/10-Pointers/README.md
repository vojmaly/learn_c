# 📌 Pointers in C

Pointers are one of the most powerful and essential features in C. They allow direct access to memory and enable dynamic memory management, efficient array handling, and complex data structures like linked lists. This guide provides a comprehensive explanation of pointers, complete with code examples and practical exercises to deepen your understanding.

---

## 🧠 What Is a Pointer?

A pointer is a variable that stores the memory address of another variable.

### 🔹 Declaration Syntax
The most common syntax for declaring a pointer is:

```c
int* ptr;
```

This declares `ptr` as a pointer to an integer. The `*` symbol indicates that `ptr` will hold the address of an `int`.

You can also write:

```c
int *ptr;
```

Both styles are valid and equivalent. The placement of the `*` is a matter of style and readability.

### 🔹 Example

```c
int x = 10;
int *ptr = &x;  // ptr holds the address of x
```
IS SAME AS:

```c
int x = 10;
int *ptr;  // ptr holds the address of x
ptr = &x; 
```

- `&x` gives the address of variable `x`.
- `*ptr` accesses the value stored at that address.

## 🔹 Multiple Declarations in One Line

Be cautious when declaring multiple variables in one line:

```c
int* a, b;
```

This declares:
- `a` as a pointer to `int`
- `b` as a regular `int`

To declare both as pointers, you must use:

```c
int *a, *b;
```

## 🔹 Best Practices

- Prefer one declaration per line for clarity:
  ```c
  int *a;
  int *b;
  ```
- Place the `*` next to the variable name to emphasize what is being declared as a pointer.
- Always initialize pointers before use to avoid undefined behavior.

## 🧭 Summary

- `int* ptr;` and `int *ptr;` are both valid pointer declarations.
- The `*` binds to the variable name, not the type.
- Be careful when declaring multiple variables in one line.
- Clear and consistent pointer syntax improves code readability and safety.

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

## 🔹 Passing a Variable Using a Pointer

When a variable is passed to a function using a pointer, the function receives the memory address of the variable. This allows the function to modify the original value.

### 🔸 Syntax

```c
void modify(int *x) {
    *x = 100;  // modifies the original variable
}
```

### 🔸 Example

```c
#include <stdio.h>

void update(int *value) {
    *value += 10;
}

int main() {
    int num = 50;
    update(&num);  // pass address of num
    printf("Updated value: %d\n", num);  // Output: 60
    return 0;
}
```

---

## 🔹 Passing an Array Using a Pointer

Arrays are naturally passed by reference in C, meaning the function receives a pointer to the first element. This allows the function to modify the array contents directly.

### 🔸 Syntax

```c
void process(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
		//*(arr + i) *= 2; same but diferent syntax
    }
}
```

### 🔸 Example

```c
#include <stdio.h>

void doubleElements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int data[3] = {1, 2, 3};
    doubleElements(data, 3);  // pass array by reference
    for (int i = 0; i < 3; i++) {
        printf("%d ", data[i]);  // Output: 2 4 6
    }
    return 0;
}
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
