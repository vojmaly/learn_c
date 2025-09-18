# 🧩 Functions in C

Functions in C are blocks of code designed to perform a specific task. They help organize code, improve readability, and promote reusability. This guide explains how functions work in C, how to define and use them, and includes code examples followed by training exercises to help you practice.

---

## 📚 What Is a Function?

A function is a named block of code that performs a specific operation. It can take inputs (parameters), process them, and optionally return a result.

### 🔹 Types of Functions
- **Library Functions**: Built-in functions like `printf()`, `scanf()`, `sqrt()`, etc.
- **User-Defined Functions**: Functions created by the programmer.

---

## 🧠 Function Structure

### 🔹 Syntax of a Function Definition
```c
return_type function_name(parameter_list) {
    // body of the function
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

## 🔄 Function Declaration vs. Definition

- **Declaration**: Tells the compiler about the function's name, return type, and parameters.
  ```c
  int add(int, int); // declaration
  ```
- **Definition**: Contains the actual code.
  ```c
  int add(int a, int b) {
      return a + b;
  }
  ```

---

## 🔁 Function Call

To use a function, you call it by its name and pass arguments:
```c
int result = add(10, 20);
```

---

## 🧮 Return Type

The return type specifies what kind of value the function returns:
- `int`, `float`, `char`, `void`, etc.
- Use `void` if the function does not return anything.

### 🔹 Example: Void Function
```c
void greet() {
    printf("Hello, World!\n");
}
```

---

## 🧾 Parameters and Arguments

- **Parameters**: Variables listed in the function definition.
- **Arguments**: Actual values passed during a function call.

### 🔹 Example:
```c
void display(int number) {
    printf("Number: %d\n", number);
}
```

---

## 🔄 Scope of Variables

- **Local Variables**: Declared inside a function; accessible only within that function.
- **Global Variables**: Declared outside all functions; accessible throughout the program.

---

## 🔁 Recursion

A function that calls itself is called a recursive function.

### 🔹 Example: Factorial Using Recursion
```c
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}
```

---

## 🧑‍💻 Training Exercises (No Code Examples)

### ✅ Exercise 1: Create a Simple Function
**Task**: Write a function that takes two integers and returns their sum. Call the function from `main()` and print the result.

---

### ✅ Exercise 2: Void Function
**Task**: Create a function that prints a greeting message. It should not return any value.

---

### ✅ Exercise 3: Function with Multiple Parameters
**Task**: Write a function that takes three float values and returns their average. Call it with sample values and display the result.

---

### ✅ Exercise 4: Function Declaration and Definition
**Task**: Declare a function at the top of your program and define it later. Use it to calculate the square of a number.

---

### ✅ Exercise 5: Use Global and Local Variables
**Task**: Create a program with one global variable and one local variable inside a function. Print both values from within the function.

---

### ✅ Exercise 6: Recursive Function
**Task**: Write a recursive function to calculate the factorial of a number. Call it from `main()` and print the result.

---

### ✅ Exercise 7: Function Returning Boolean
**Task**: Create a function that checks if a number is even. Return `1` for true and `0` for false. Print the result in `main()`.

---

### ✅ Exercise 8: Function for String Output
**Task**: Write a function that takes a string as input and prints it with a custom message.

---

### ✅ Exercise 9: Function with No Parameters
**Task**: Create a function that returns the current year (hardcoded). Call it from `main()` and print the result.

---

### ✅ Exercise 10: Modular Program Design
**Task**: Break a simple calculator program into multiple functions: one for each operation (add, subtract, multiply, divide). Call them based on user input.

---

## 🧭 Summary

- Functions improve modularity, readability, and reusability.
- They can return values or perform actions without returning anything.
- Parameters allow functions to work with different inputs.
- Recursion enables elegant solutions for repetitive tasks.

