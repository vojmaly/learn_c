# 🧩 Functions and Function Prototypes in C

Functions in C are reusable blocks of code that perform specific tasks. They help organize programs into logical units, improve readability, and reduce redundancy. This guide explains how functions work, what function prototypes are, and how to use them effectively—with code examples and training exercises to reinforce your understanding.

---

## 📚 What Is a Function?

A function is a named block of code that performs a specific operation. It can take inputs (parameters), process them, and optionally return a result.

### 🔹 Syntax of a Function Definition
```c
return_type function_name(parameter_list) {
    // function body
}
```

### 🔹 Example: Function to Add Two Numbers
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}
```

---

## 🧾 Function Prototypes

A function prototype is a declaration of a function that tells the compiler about the function's name, return type, and parameters before its actual definition.

### 🔹 Syntax
```c
return_type function_name(parameter_list);
```

### 🔹 Why Use Prototypes?
- Allows calling a function before its definition.
- Helps the compiler check for correct usage.
- Improves code organization in large programs.

### 🔹 Example with Prototype
```c
#include <stdio.h>

int add(int, int);  // function prototype

int main() {
    int result = add(10, 20);
    printf("Sum: %d\n", result);
    return 0;
}

int add(int x, int y) {
    return x + y;
}
```

---

## 🔄 Function Call

To use a function, you call it by its name and pass arguments:
```c
int result = add(10, 20);
```

---

## 🧠 Return Types

Functions can return values of any data type:
- `int`, `float`, `char`, `double`, `void`, etc.
- Use `void` if the function does not return anything.

### 🔹 Example: Void Function
```c
void greet() {
    printf("Hello!\n");
}
```

---

## 🧮 Parameters and Arguments

- **Parameters**: Variables listed in the function definition.
- **Arguments**: Actual values passed during a function call.

### 🔹 Example:
```c
void display(int number) {
    printf("Number: %d\n", number);
}
```

---

## 🔁 Scope of Variables

- **Local Variables**: Declared inside a function; accessible only within that function.
- **Global Variables**: Declared outside all functions; accessible throughout the program.

---

## 🔄 Recursion

A function that calls itself is called a recursive function.

### 🔹 Example: Factorial Using Recursion
```c
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}
```

---

## 🧑‍💻 Training Exercisess

### ✅ Exercise 1: Basic Function
**Task**: Write a function that takes two integers and returns their sum. Call it from `main()` and print the result.

---

### ✅ Exercise 2: Void Function
**Task**: Create a function that prints a welcome message. It should not return any value.

---

### ✅ Exercise 3: Function with Multiple Parameters
**Task**: Write a function that takes three float values and returns their average. Call it with sample values and display the result.

---

### ✅ Exercise 4: Function Prototype Usage
**Task**: Declare a function prototype at the top of your program. Define the function after `main()` and use it to calculate the square of a number.

---

### ✅ Exercise 5: Global vs. Local Scope
**Task**: Create a program with one global variable and one local variable inside a function. Print both values from within the function.

---

### ✅ Exercise 6: Recursive Function
**Task**: Write a recursive function to calculate the factorial of a number. Call it from `main()` and print the result.

---

### ✅ Exercise 7: Boolean Return
**Task**: Create a function that checks if a number is even. Return `1` for true and `0` for false. Print the result in `main()`.

---

### ✅ Exercise 8: String Parameter
**Task**: Write a function that takes a string as input and prints it with a custom message.

---

### ✅ Exercise 9: Function with No Parameters
**Task**: Create a function that returns the current year (hardcoded). Call it from `main()` and print the result.

---

### ✅ Exercise 10: Modular Calculator
**Task**: Break a simple calculator program into multiple functions: one for each operation (add, subtract, multiply, divide). Call them based on user input.

---

## 🧭 Summary

- Functions improve modularity, readability, and reusability.
- Function prototypes allow early declaration and help with compiler checks.
- Parameters and return types define how data flows in and out of functions.
- Recursion enables elegant solutions for repetitive tasks.

