# 🔁 Loops in C

Loops in C are used to execute a block of code repeatedly under certain conditions. They are essential for tasks like iterating over arrays, performing repetitive calculations, and automating control flow. This guide covers the three main types of loops in C—`for`, `while`, and `do-while`—with code examples and training exercises to help you practice.

---

## 🔂 Types of Loops in C

### 1. `for` Loop

Used when the number of iterations is known in advance.

#### 🔹 Syntax
```c
for (initialization; condition; increment/decrement) {
    // code to execute
}
```

#### 🔹 Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

---

### 2. `while` Loop

Used when the number of iterations is not known and depends on a condition.

#### 🔹 Syntax
```c
while (condition) {
    // code to execute
}
```

#### 🔹 Example
```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("Iteration %d\n", i);
        i++;
    }
    return 0;
}
```

---

### 3. `do-while` Loop

Similar to `while`, but guarantees at least one execution of the loop body.

#### 🔹 Syntax
```c
do {
    // code to execute
} while (condition);
```

#### 🔹 Example
```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
```

---

## 🔄 Loop Control Statements

### 🔹 `break`
Exits the loop immediately.

```c
if (i == 3) {
    break;
}
```

### 🔹 `continue`
Skips the current iteration and proceeds to the next.

```c
if (i == 3) {
    continue;
}
```

---

## 🧠 Infinite Loops

Loops that run forever unless explicitly broken.

```c
while (1) {
    // infinite loop
}
```

> ⚠️ Use with caution and always include a termination condition.

---

## 🧑‍💻 Training Exercises (No Code Examples)

### ✅ Exercise 1: Print Numbers with `for` Loop
**Task**: Use a `for` loop to print numbers from 1 to 10.

---

### ✅ Exercise 2: Countdown with `while` Loop
**Task**: Use a `while` loop to count down from 10 to 1 and print each number.

---

### ✅ Exercise 3: Guaranteed Execution with `do-while`
**Task**: Use a `do-while` loop to prompt the user for a password until the correct one is entered. Ensure the prompt appears at least once.

---

### ✅ Exercise 4: Sum of Natural Numbers
**Task**: Use a loop to calculate the sum of the first N natural numbers. Ask the user for N.

---

### ✅ Exercise 5: Multiplication Table
**Task**: Ask the user for a number and use a loop to print its multiplication table up to 10.

---

### ✅ Exercise 6: Skip Specific Iteration
**Task**: Use a loop to print numbers from 1 to 10, but skip printing the number 5 using `continue`.

---

### ✅ Exercise 7: Break on Condition
**Task**: Use a loop to print numbers starting from 1. Stop the loop when the number reaches 7 using `break`.

---

### ✅ Exercise 8: Reverse a Number
**Task**: Ask the user for a number and use a loop to reverse its digits. Print the reversed number.

---

### ✅ Exercise 9: Factorial Calculation
**Task**: Ask the user for a number and use a loop to calculate its factorial. Print the result.

---

### ✅ Exercise 10: Infinite Loop with Exit
**Task**: Create an infinite loop that keeps asking the user for input. Exit the loop when the user enters a specific keyword.

---

## 🧭 Summary

- `for` loops are ideal for fixed iterations.
- `while` loops are best when the condition is evaluated before each iteration.
- `do-while` loops ensure the body runs at least once.
- Use `break` and `continue` to control loop behavior.
- Loops are foundational for automation, iteration, and dynamic control flow.

---

