# ⚙️ Macros and Preprocessor Directives in C

Preprocessor directives in C are instructions that are processed before the actual compilation begins. They are used to include files, define constants, conditionally compile code, and create macros. These directives begin with the `#` symbol and are handled by the **C preprocessor**.

---

## 🧠 What Is the Preprocessor?

The preprocessor runs before the compiler and performs tasks like:

- File inclusion
- Macro expansion
- Conditional compilation
- Line control and error handling

---

## 📄 Common Preprocessor Directives

| Directive     | Purpose                                      |
|---------------|----------------------------------------------|
| `#include`    | Includes header files                        |
| `#define`     | Defines macros and constants                 |
| `#undef`      | Undefines a macro                            |
| `#ifdef`      | Checks if macro is defined                   |
| `#ifndef`     | Checks if macro is not defined               |
| `#if`         | Tests a condition                            |
| `#else`       | Alternative block if condition fails         |
| `#elif`       | Else-if condition                            |
| `#endif`      | Ends conditional block                       |
| `#error`      | Generates a compile-time error               |
| `#pragma`     | Compiler-specific instructions               |

---

## 🔹 `#include`

Used to include standard or user-defined header files.

```c
#include <stdio.h>     // standard header
#include "myheader.h"  // user-defined header
```

---

## 🔹 `#define` Macros

Defines symbolic constants or macro functions.

### 🔸 Constant Macro

```c
#define PI 3.14159
```

### 🔸 Function-like Macro

```c
#define SQUARE(x) ((x) * (x))
```

> Always use parentheses to avoid precedence issues.

---

## 🔹 `#undef`

Removes a macro definition.

```c
#undef PI
```

---

## 🔹 Conditional Compilation

Used to compile code selectively based on macro definitions.

```c
#ifdef DEBUG
    printf("Debug mode\n");
#endif
```

```c
#ifndef RELEASE
    #define RELEASE
#endif
```

```c
#if VERSION == 2
    printf("Version 2\n");
#elif VERSION == 3
    printf("Version 3\n");
#else
    printf("Unknown version\n");
#endif
```

---

## 🔹 `#error`

Generates a custom error message during preprocessing.

```c
#ifndef CONFIG
    #error "CONFIG is not defined"
#endif
```

---

## 🔹 `#pragma`

Used for compiler-specific instructions like disabling warnings or packing structures.

```c
#pragma once  // prevents multiple inclusions
```

---

## 🧠 Macro vs. Function

| Feature         | Macro                          | Function                        |
|-----------------|--------------------------------|---------------------------------|
| Speed           | Faster (inline expansion)       | Slower (function call overhead) |
| Type safety     | No                              | Yes                             |
| Debugging       | Harder                          | Easier                          |
| Flexibility     | Limited                         | More flexible                   |

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Define Constants
Create macros for mathematical constants like PI and E. Use them in calculations.

### ✅ Exercise 2: Macro Function
Write a macro that calculates the cube of a number. Test it with different inputs.

### ✅ Exercise 3: Conditional Compilation
Use `#ifdef` to include debug messages only when a macro `DEBUG` is defined.

### ✅ Exercise 4: Include Guard
Create a header file with an include guard using `#ifndef`, `#define`, and `#endif`.

### ✅ Exercise 5: Undefine Macro
Define a macro and then use `#undef` to remove it. Verify that it's no longer usable.

### ✅ Exercise 6: Version Control
Use `#if`, `#elif`, and `#else` to print different messages based on a `VERSION` macro.

### ✅ Exercise 7: Error Directive
Write a program that triggers a compile-time error if a required macro is not defined.

### ✅ Exercise 8: Macro vs Function
Implement both a macro and a function to compute the square of a number. Compare behavior and output.

### ✅ Exercise 9: Pragma Usage
Use `#pragma once` in a header file and include it in multiple source files.

### ✅ Exercise 10: Nested Macros
Create a macro that uses another macro inside its definition. Test the expansion result.
