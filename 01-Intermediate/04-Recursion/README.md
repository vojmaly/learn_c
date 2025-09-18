# 🔁 Recursion in C

Recursion is a programming technique where a function calls itself to solve a problem. It is especially useful for tasks that can be broken down into smaller, similar subproblems, such as mathematical computations, data structure traversal, and algorithm design.

---

## 🧠 How Recursion Works

A recursive function solves a problem by calling itself with a modified argument, gradually approaching a base case that terminates the recursion.

### 🔹 Structure of a Recursive Function

```c
return_type function_name(parameters) {
    if (base_condition) {
        return result;
    } else {
        return function_name(modified_parameters);
    }
}
```

---

## 🔸 Example: Factorial Calculation

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;         // base case
    else return n * factorial(n - 1);  // recursive call
}

int main() {
    int result = factorial(5);
    printf("Factorial: %d\n", result);  // Output: 120
    return 0;
}
```

---

## 🔸 Example: Fibonacci Sequence

```c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
```

---

## 🔍 Base Case and Recursive Case

- **Base Case**: The condition under which the function stops calling itself.
- **Recursive Case**: The part where the function calls itself with a simpler or smaller input.

Without a base case, recursion leads to infinite calls and stack overflow.

---

## 🧮 Stack Behavior in Recursion

Each recursive call is pushed onto the call stack. When the base case is reached, the stack unwinds as each call returns its result.

---

## ⚠️ Common Pitfalls

- Missing or incorrect base case
- Excessive recursion depth leading to stack overflow
- Inefficient recursion (e.g., repeated calculations in naive Fibonacci)

---

## 🧰 Tail Recursion

Tail recursion occurs when the recursive call is the last operation in the function. Some compilers optimize tail-recursive functions to improve performance.

```c
int tail_factorial(int n, int acc) {
    if (n == 0) return acc;
    return tail_factorial(n - 1, n * acc);
}
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Factorial Function
Create a recursive function that calculates the factorial of a given number. Call it and print the result.

### ✅ Exercise 2: Fibonacci Generator
Write a recursive function that returns the nth Fibonacci number. Print the first 10 Fibonacci numbers.

### ✅ Exercise 3: Sum of Digits
Create a recursive function that calculates the sum of digits of a number. Print the result.

### ✅ Exercise 4: Power Function
Write a recursive function that calculates `a^b` (a raised to the power of b). Test it with sample inputs.

### ✅ Exercise 5: Reverse a String
Create a recursive function that reverses a string. Print the reversed string.

### ✅ Exercise 6: Palindrome Check
Write a recursive function that checks if a string is a palindrome. Print the result.

### ✅ Exercise 7: Binary Search
Implement a recursive binary search function. Use it to search for a value in a sorted array.

### ✅ Exercise 8: GCD Calculation
Create a recursive function that calculates the greatest common divisor (GCD) of two integers.

### ✅ Exercise 9: Print Array in Reverse
Write a recursive function that prints the elements of an array in reverse order.

### ✅ Exercise 10: Tower of Hanoi
Implement the Tower of Hanoi algorithm using recursion. Print each move step-by-step.
