# 🔍 Scope and Lifetime of Variables in C

Understanding **scope** and **lifetime** of variables is crucial for writing efficient and bug-free C programs. These concepts determine where a variable can be accessed and how long it exists during program execution. This guide explains both in detail, with code examples and training exercises to help you master them.

---

## 🧭 Scope of Variables

**Scope** refers to the region of the program where a variable is accessible.

### 🔹 1. Local Scope

- Variables declared inside a function or block (`{}`) are **local**.
- They are accessible only within that function or block.

#### Example:
```c
#include <stdio.h>

void greet() {
    int localVar = 10;  // local scope
    printf("Local variable: %d\n", localVar);
}
```

> [!WARNING]
> `localVar` cannot be accessed outside the `greet()` function.

---

### 🔹 2. Global Scope

- Variables declared outside all functions are **global**.
- They are accessible from any function in the same file.

#### Example:
```c
#include <stdio.h>

int globalVar = 100;  // global scope

void display() {
    printf("Global variable: %d\n", globalVar);
}
```
> [!WARNING]
> `globalVar` can be accessed from any function.

---

### 🔹 3. Block Scope

- Variables declared inside loops, conditionals, or compound statements have **block scope**.
- They are accessible only within that block.

#### Example:
```c
#include <stdio.h>

int main() {
    if (1) {
        int blockVar = 5;
        printf("Block variable: %d\n", blockVar);
    }
    // blockVar is not accessible here
    return 0;
}
```

---

## ⏳ Lifetime of Variables

**Lifetime** refers to how long a variable exists in memory during program execution.

### 🔹 1. Automatic Variables

- Declared inside functions without `static`.
- Created when the function is called, destroyed when it ends.

#### Example:
```c
void show() {
    int temp = 5;  // automatic
    printf("%d\n", temp);
}
```

---

### 🔹 2. Static Variables

- Declared with the `static` keyword.
- Retain their value between function calls.
- Lifetime is the entire program duration, but scope is limited.

#### Example:
```c
void counter() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}
```

> [!WARNING]
> Each time `counter()` is called, `count` retains its previous value.

---

### 🔹 3. Global Variables

- Declared outside all functions.
- Lifetime is the entire program duration.
- Accessible from any function (unless restricted by `extern` or `static`).

---

### 🔹 4. Register Variables *(Rarely Used)*

- Declared with `register` keyword.
- Suggests storing the variable in a CPU register for faster access.
- Scope and lifetime are similar to automatic variables.

---

## 🧑‍💻 Training Exercisess

### ✅ Exercise 1: Local Scope
**Task**: Declare a variable inside a function and try to access it outside the function. Observe the compiler error and understand why it occurs.

---

### ✅ Exercise 2: Global Scope
**Task**: Declare a global variable and access it from multiple functions. Print its value from each function.

---

### ✅ Exercise 3: Block Scope
**Task**: Declare a variable inside an `if` block. Try to access it outside the block and observe the error.

---

### ✅ Exercise 4: Automatic Lifetime
**Task**: Create a function with a local variable. Call the function multiple times and observe how the variable is reinitialized each time.

---

### ✅ Exercise 5: Static Lifetime
**Task**: Create a function with a static variable. Call the function multiple times and observe how the variable retains its value.

---

### ✅ Exercise 6: Modify Global Variable
**Task**: Declare a global variable and modify its value from different functions. Print the updated value after each modification.

---

### ✅ Exercise 7: Shadowing Variables
**Task**: Declare a global variable and a local variable with the same name inside a function. Print both values and observe which one is used.

---

### ✅ Exercise 8: Register Keyword
**Task**: Declare a variable using the `register` keyword and use it in a loop. Observe any performance difference (optional).

---

### ✅ Exercise 9: Scope in Loops
**Task**: Declare a variable inside a `for` loop. Try to access it outside the loop and observe the result.

---

### ✅ Exercise 10: Static in Multiple Functions
**Task**: Use a static variable in two different functions. Observe how scope limits access even though lifetime persists.

---

## 🧭 Summary

- **Scope** defines where a variable can be accessed.
- **Lifetime** defines how long a variable exists in memory.
- Use **local** variables for temporary tasks, **global** for shared data, and **static** for persistent state.
- Understanding scope and lifetime helps prevent bugs and improves program structure.
