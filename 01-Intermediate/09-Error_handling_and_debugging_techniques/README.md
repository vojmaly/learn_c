# 🛠️ Error Handling and Debugging Techniques in C

Error handling and debugging are essential skills for writing reliable and maintainable C programs. C provides limited built-in error handling, so developers must use strategies like return codes, global error variables, and logging. Debugging techniques help identify and fix issues during development and testing.

---

## ❗ Types of Errors

| Error Type     | Description                                      |
|----------------|--------------------------------------------------|
| Syntax Error   | Violates language rules; caught at compile time  |
| Runtime Error  | Occurs during execution (e.g., division by zero) |
| Logical Error  | Produces incorrect output; hard to detect        |
| Semantic Error | Misuse of language constructs                    |

---

## 🔹 Error Handling Techniques

### 🔸 Return Codes

Functions often return status codes to indicate success or failure.

```c
int openFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) return -1;
    fclose(fp);
    return 0;
}
```

### 🔸 `errno` and `<errno.h>`

The global variable `errno` stores error codes set by system calls and library functions.

```c
#include <errno.h>
#include <stdio.h>

if (fp == NULL) {
    perror("File open failed");
    printf("Error code: %d\n", errno);
}
```

### 🔸 `perror()` and `strerror()`

Use these functions to print human-readable error messages.

```c
perror("Error");
printf("%s\n", strerror(errno));
```

---

## 🧪 Debugging Techniques

### 🔸 Print Statements

Use `printf()` to trace variable values and program flow.

```c
printf("Value of x: %d\n", x);
```

### 🔸 Assertions

Use `assert()` to enforce conditions during development.

```c
#include <assert.h>
assert(x != 0);
```

### 🔸 Debuggers

Use tools like `gdb` to step through code, inspect variables, and set breakpoints.

```bash
gdb ./program
```

### 🔸 Compiler Warnings

Enable warnings with `-Wall` flag in `gcc` to catch potential issues.

```bash
gcc -Wall main.c -o program
```

### 🔸 Valgrind

Use Valgrind to detect memory leaks and invalid memory access.

```bash
valgrind ./program
```

---

## 🧠 Best Practices

- Check return values of system and library calls
- Use meaningful error codes and messages
- Avoid silent failures
- Validate user input and external data
- Use logging for persistent error tracking
- Isolate and test modules independently
- Document known failure modes and recovery strategies

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Return Code Handling
Write a function that opens a file and returns a status code. Handle the result in `main()` and print appropriate messages.

### ✅ Exercise 2: Use `errno`
Create a program that attempts to open a non-existent file. Print the error code and message using `errno` and `perror()`.

### ✅ Exercise 3: Assertion Check
Write a function that divides two numbers. Use `assert()` to prevent division by zero.

### ✅ Exercise 4: Debug with Print Statements
Create a program with a logical error. Use `printf()` to trace variable values and identify the bug.

### ✅ Exercise 5: Enable Compiler Warnings
Compile a program with `-Wall` and fix all warnings reported by the compiler.

### ✅ Exercise 6: Memory Leak Detection
Write a program that allocates memory but forgets to free it. Use Valgrind to detect and fix the leak.

### ✅ Exercise 7: Use `strerror()`
Create a program that triggers a file error and prints a custom message using `strerror()`.

### ✅ Exercise 8: Debug with `gdb`
Write a program with a segmentation fault. Use `gdb` to locate the faulty line and fix the issue.

### ✅ Exercise 9: Input Validation
Create a program that reads user input and validates it before processing. Print error messages for invalid input.

### ✅ Exercise 10: Modular Error Logging
Design a module that logs errors to a file. Use it in a main program to record runtime issues.
