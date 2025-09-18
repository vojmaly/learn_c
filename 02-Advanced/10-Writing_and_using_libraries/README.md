# 📚 Writing and Using Libraries in C

Creating and using libraries in C is a powerful way to organize code, promote reuse, and simplify large projects. Libraries encapsulate functionality into separate modules that can be compiled and linked into programs. C supports both **static libraries** and **dynamic/shared libraries**, each with distinct use cases.

---

## 🧱 Why Use Libraries?

- **Modularity**: Separate concerns into reusable components
- **Reusability**: Share code across multiple projects
- **Maintainability**: Easier to update and debug
- **Encapsulation**: Hide implementation details from users

---

## 🔹 Static vs Dynamic Libraries

| Feature             | Static Library (`.a`)       | Dynamic Library (`.so`)         |
|---------------------|-----------------------------|----------------------------------|
| Linking             | At compile time              | At runtime                       |
| File extension      | `.a`                         | `.so`                            |
| Portability         | Easier to distribute         | Requires runtime support         |
| Size                | Larger executable            | Smaller executable               |
| Update flexibility  | Requires recompilation       | Can update without recompiling   |

---

## 🛠️ Creating a Static Library

### 🔸 Step 1: Write Header File

```c
// mathlib.h
#ifndef MATHLIB_H
#define MATHLIB_H

int add(int a, int b);
int multiply(int a, int b);

#endif
```

### 🔸 Step 2: Write Source File

```c
// mathlib.c
#include "mathlib.h"

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```

### 🔸 Step 3: Compile Object File

```bash
gcc -c mathlib.c
```

This produces `mathlib.o`.

### 🔸 Step 4: Create Static Library

```bash
ar rcs libmathlib.a mathlib.o
```

This creates `libmathlib.a`.

### 🔸 Step 5: Use in Program

```c
// main.c
#include <stdio.h>
#include "mathlib.h"

int main() {
    printf("Sum: %d\n", add(3, 4));
    printf("Product: %d\n", multiply(2, 5));
    return 0;
}
```

### 🔸 Step 6: Compile and Link

```bash
gcc main.c -L. -lmathlib -o app
```

Use `-L.` to specify the library path and `-lmathlib` to link.

---

## 🛠️ Creating a Shared Library

### 🔸 Step 1: Compile with Position-Independent Code

```bash
gcc -fPIC -c mathlib.c
```

### 🔸 Step 2: Create Shared Library

```bash
gcc -shared -o libmathlib.so mathlib.o
```

### 🔸 Step 3: Compile and Link with Shared Library

```bash
gcc main.c -L. -lmathlib -o app
```

### 🔸 Step 4: Set Library Path

```bash
export LD_LIBRARY_PATH=.
./app
```

---

## 🔐 Hiding Internal Functions

Only expose public functions in the header file. Internal helper functions should be defined in the source file and not declared in the header.

---

## 🧠 Best Practices

- Use include guards in headers
- Keep headers clean and minimal
- Document public APIs
- Avoid global variables in libraries
- Use `static` for internal functions
- Separate interface (`.h`) from implementation (`.c`)

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create a Math Library  
Write a library with functions for addition, subtraction, multiplication, and division. Use it in a separate program to perform calculations.

### ✅ Exercise 2: String Utility Library  
Develop a library with functions to reverse a string, convert to uppercase, and count vowels. Test each function from a main program.

### ✅ Exercise 3: Static vs Shared  
Create both static and shared versions of a library. Compile and link them with a program and compare executable sizes.

### ✅ Exercise 4: Modular File I/O  
Write a library that provides functions to read from and write to text files. Use it to log messages from a main program.

### ✅ Exercise 5: Encapsulation  
Design a library with public and private functions. Ensure only public functions are accessible through the header.

### ✅ Exercise 6: Compile-Time Linking  
Link a static library to a program and verify that the executable runs without needing external files.

### ✅ Exercise 7: Runtime Linking  
Link a shared library and run the program. Modify the library and re-run without recompiling the main program.

### ✅ Exercise 8: Header Documentation  
Write a header file with clear comments explaining each function. Use it to guide usage in the main program.

### ✅ Exercise 9: Error Handling  
Add error handling to a library that performs file operations. Return status codes and print messages in the main program.

### ✅ Exercise 10: Library with Structs  
Create a library that defines and manipulates a custom struct (e.g., `Person`). Include functions to initialize, print, and modify the struct.
