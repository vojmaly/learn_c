# 🔀 Control Flow in C: `if`, `else`, and `switch`

Control flow statements in C determine the order in which instructions are executed. They allow your program to make decisions and execute different code paths based on conditions. This guide covers the `if`, `else`, and `switch` statements in detail, with code examples and training exercises to help you master decision-making in C.

---

## 🧠 `if` Statement

The `if` statement executes a block of code only if a specified condition is true.

### 🔹 Syntax
```c
if (condition) {
    // code to execute if condition is true
}
```

### 🔹 Example
```c
#include <stdio.h>

int main() {
    int score = 85;
    if (score >= 80) {
        printf("You passed!\n");
    }
    return 0;
}
```

---

## 🔁 `if-else` Statement

The `if-else` statement provides an alternative block of code to execute when the condition is false.

### 🔹 Syntax
```c
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

### 🔹 Example
```c
#include <stdio.h>

int main() {
    int score = 65;
    if (score >= 80) {
        printf("You passed!\n");
    } else {
        printf("You failed.\n");
    }
    return 0;
}
```

---

## 🔄 `if-else if-else` Ladder

Used to check multiple conditions sequentially.

### 🔹 Syntax
```c
if (condition1) {
    // code if condition1 is true
} else if (condition2) {
    // code if condition2 is true
} else {
    // code if none are true
}
```

### 🔹 Example
```c
#include <stdio.h>

int main() {
    int score = 70;
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}
```

---

## 🔘 `switch` Statement

The `switch` statement is used to execute one block of code among many options based on the value of a variable.

### 🔹 Syntax
```c
switch (expression) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    ...
    default:
        // code if no case matches
}
```

### 🔹 Example
```c
#include <stdio.h>

int main() {
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}
```

> 🔹 `break` prevents fall-through to the next case. Without it, all subsequent cases will execute.

---

## 🧑‍💻 Training Exerrcises

### ✅ Exercise 1: Basic `if` Statement
**Task**: Ask the user to enter a number. Use an `if` statement to check if the number is positive. Print a message if true.

---

### ✅ Exercise 2: `if-else` Decision
**Task**: Ask the user for their age. Use `if-else` to determine if they are eligible to vote (age ≥ 18). Print the result.

---

### ✅ Exercise 3: Grading System
**Task**: Ask the user for a test score. Use an `if-else if-else` ladder to assign a grade (A, B, C, F) based on score ranges.

---

### ✅ Exercise 4: Even or Odd
**Task**: Ask the user to enter an integer. Use `if-else` to determine if the number is even or odd. Print the result.

---

### ✅ Exercise 5: Day of the Week
**Task**: Ask the user to enter a number (1–7). Use a `switch` statement to print the corresponding day of the week.

---

### ✅ Exercise 6: Simple Calculator
**Task**: Ask the user to choose an operation (+, -, *, /). Use a `switch` statement to perform the selected operation on two numbers.

---

### ✅ Exercise 7: Character Classification
**Task**: Ask the user to enter a character. Use `if-else` to determine if it is a vowel, consonant, digit, or special character.

---

### ✅ Exercise 8: Multiple Conditions
**Task**: Ask the user for temperature. Use an `if-else if-else` ladder to print messages like "Cold", "Warm", "Hot" based on ranges.

---

### ✅ Exercise 9: Nested `if`
**Task**: Ask the user for login credentials. Use nested `if` statements to validate both username and password.

---

### ✅ Exercise 10: Fall-through Behavior
**Task**: Create a `switch` statement without `break` statements. Observe and explain how fall-through works by printing multiple cases.

---

## 🧭 Summary

- `if` and `if-else` allow conditional execution based on boolean expressions.
- `if-else if-else` handles multiple conditions in sequence.
- `switch` is ideal for multi-way branching based on discrete values.
- Mastering control flow is essential for building interactive and responsive programs.

---

