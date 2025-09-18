# 📦 Header Files and Modular Programming in C

Modular programming in C is a design approach that breaks a program into separate, manageable, and reusable components. Header files play a key role in this structure by declaring functions, macros, constants, and data types that can be shared across multiple source files.

---

## 🧠 What Is Modular Programming?

Modular programming divides a program into independent modules, each responsible for a specific task. This improves:

- Code readability and maintainability
- Reusability across projects
- Collaboration in team environments
- Compilation efficiency

Each module typically consists of:

- A **header file** (`.h`) for declarations
- A **source file** (`.c`) for definitions

---

## 📄 What Is a Header File?

A header file contains declarations of functions, variables, macros, and types. It allows other source files to access these elements without redefining them.

### 🔹 Example: `math_utils.h`

```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);
int multiply(int a, int b);

#endif
```

> The `#ifndef`, `#define`, and `#endif` directives prevent multiple inclusions (known as an include guard).

---

## 🔧 Source File Implementation

The corresponding `.c` file contains the actual function definitions.

### 🔹 Example: `math_utils.c`

```c
#include "math_utils.h"

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```

---

## 📥 Using Header Files in Other Files

To use the functions from a module, include its header file in another source file.

### 🔹 Example: `main.c`

```c
#include <stdio.h>
#include "math_utils.h"

int main() {
    int x = add(3, 4);
    int y = multiply(2, 5);
    printf("Sum: %d, Product: %d\n", x, y);
    return 0;
}
```

---

## 🔍 Standard vs. User-Defined Headers

- **Standard headers**: Provided by the C library (e.g., `<stdio.h>`, `<stdlib.h>`)
- **User-defined headers**: Created by programmers for modular code (e.g., `"math_utils.h"`)

Use angle brackets (`<>`) for standard headers and double quotes (`""`) for user-defined headers.

---

## 🧰 Benefits of Header Files

- Centralized declarations
- Easier code sharing across files
- Reduced redundancy
- Simplified debugging and testing
- Clear separation of interface and implementation

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create a Header File
Define a header file that declares two mathematical functions. Implement them in a separate `.c` file and use them in `main.c`.

### ✅ Exercise 2: Include Guard Practice
Write a header file with an include guard. Include it in two different source files and compile them together.

### ✅ Exercise 3: Modular Calculator
Split a calculator program into modules: one for arithmetic operations, one for input/output, and one for the main logic. Use header files to connect them.

### ✅ Exercise 4: String Utilities Module
Create a module with functions for string manipulation (e.g., reverse, length). Declare them in a header file and implement them in a source file.

### ✅ Exercise 5: Reusable Constants
Define a header file with constants and macros used across multiple source files. Include it wherever needed.

### ✅ Exercise 6: Struct Declaration in Header
Declare a structure in a header file and use it in multiple source files to store and manipulate data.

### ✅ Exercise 7: Function Declaration Only
Write a header file that declares a function but does not define it. Implement the function in a separate source file and link it during compilation.

### ✅ Exercise 8: Modular File I/O
Create a module for file handling operations. Declare functions in a header file and use them in a main program.

### ✅ Exercise 9: Compile Multi-File Project
Write a program split across three `.c` files and two `.h` files. Compile all files together and run the program.

### ✅ Exercise 10: Debug Modular Code
Introduce a bug in one module and use modular structure to isolate and fix the issue efficiently.
