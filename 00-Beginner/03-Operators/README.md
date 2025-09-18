# ⚙️ Comprehensive Guide to C Operators

Operators in C are symbols that tell the compiler to perform specific mathematical, logical, or bit-level operations. They are essential for manipulating data and controlling program flow. This guide covers six major categories of operators in C: **Arithmetic**, **Relational**, **Logical**, **Assignment**, **Increment/Decrement**, and **Bitwise**, followed by training exercises to reinforce your understanding.

---

## ➕ Arithmetic Operators

Arithmetic operators perform basic mathematical operations.

| Operator | Description        | Example Use |
|----------|--------------------|-------------|
| `+`      | Addition            | `a + b`     |
| `-`      | Subtraction         | `a - b`     |
| `*`      | Multiplication      | `a * b`     |
| `/`      | Division            | `a / b`     |
| `%`      | Modulus (remainder)| `a % b`     |

- Division between integers truncates the decimal part.
- Modulus returns the remainder of integer division.

---

## 🔍 Relational Operators

Relational operators compare two values and return a boolean result (`1` for true, `0` for false).

| Operator | Description              | Example Use |
|----------|--------------------------|-------------|
| `==`     | Equal to                 | `a == b`    |
| `!=`     | Not equal to             | `a != b`    |
| `>`      | Greater than             | `a > b`     |
| `<`      | Less than                | `a < b`     |
| `>=`     | Greater than or equal to | `a >= b`    |
| `<=`     | Less than or equal to    | `a <= b`    |

- Often used in conditional statements like `if`, `while`, and `for`.

---

## 🔐 Logical Operators

Logical operators combine or invert boolean expressions.

| Operator | Description     | Example Use |
|----------|-----------------|-------------|
| `&&`     | Logical AND     | `a && b`    |
| `\|\|`     | Logical OR      |  `a \|\| b`   |
| `!`      | Logical NOT     | `!a`        |

- `&&` returns true only if both operands are true.
- `||` returns true if at least one operand is true.
- `!` inverts the truth value of its operand.

---

## 📝 Assignment Operators

Assignment operators assign values to variables and can combine assignment with arithmetic.

| Operator | Description               | Example Use |
|----------|---------------------------|-------------|
| `=`      | Simple assignment          | `a = b`     |
| `+=`     | Add and assign             | `a += b`    |
| `-=`     | Subtract and assign        | `a -= b`    |
| `*=`     | Multiply and assign        | `a *= b`    |
| `/=`     | Divide and assign          | `a /= b`    |
| `%=`     | Modulus and assign         | `a %= b`    |

- Compound assignment operators simplify expressions and reduce redundancy.

---

## 🔁 Increment/Decrement Operators

These operators increase or decrease a variable's value by one.

| Operator | Description         | Example Use |
|----------|---------------------|-------------|
| `++`     | Increment by 1       | `a++` or `++a` |
| `--`     | Decrement by 1       | `a--` or `--a` |

- **Prefix** (`++a`, `--a`): modifies the value before it's used.
- **Postfix** (`a++`, `a--`): modifies the value after it's used.

---

## 🧮 Bitwise Operators

Bitwise operators operate on individual bits of integer values.

| Operator | Description     | Example Use |
|----------|-----------------|-------------|
| `&`      | Bitwise AND      | `a & b`     |
| `\|`      | Bitwise OR       | `a \| b`     |
| `^`      | Bitwise XOR      | `a ^ b`     |
| `~`      | Bitwise NOT      | `~a`        |
| `<<`     | Left shift       | `a << 1`    |
| `>>`     | Right shift      | `a >> 1`    |

- Bitwise operations are useful for low-level programming, flags, and performance optimization.
- Shifting left multiplies by powers of two; shifting right divides.

---

## 🧑‍💻 Training Exercises (No Code Examples)

### ✅ Exercise 1: Arithmetic Practice
**Task**: Declare two integers and perform addition, subtraction, multiplication, division, and modulus. Print each result.

---

### ✅ Exercise 2: Relational Comparison
**Task**: Compare two numbers using all relational operators. Print whether each condition is true or false.

---

### ✅ Exercise 3: Logical Evaluation
**Task**: Create two boolean expressions using relational operators. Combine them using `&&`, `||`, and `!`. Print the final result of each combination.

---

### ✅ Exercise 4: Assignment Operations
**Task**: Declare a variable and update its value using each compound assignment operator. Print the value after each operation.

---

### ✅ Exercise 5: Increment and Decrement
**Task**: Use both prefix and postfix increment/decrement operators on a variable. Print the value before and after each operation to observe the difference.

---

### ✅ Exercise 6: Bitwise Manipulation
**Task**: Declare two integers and apply all bitwise operators. Print the results in both decimal and binary format.

---

### ✅ Exercise 7: Shift Operations
**Task**: Use left and right shift operators to multiply and divide an integer by powers of two. Print the results.

---

### ✅ Exercise 8: Conditional Logic
**Task**: Use a combination of relational and logical operators in an `if` statement to check if a number is within a specific range and meets multiple conditions.

---

### ✅ Exercise 9: Toggle Bits
**Task**: Use bitwise XOR to toggle specific bits in an integer. Print the original and modified values.

---

### ✅ Exercise 10: Flag System
**Task**: Simulate a flag system using bitwise OR to set flags and bitwise AND to check if a flag is active.

---

## 🧭 Summary

- Operators are the building blocks of expressions and logic in C.
- Each category serves a distinct purpose, from math to memory-level manipulation.
- Practicing with real-world tasks helps solidify your understanding and prepares you for more advanced programming challenges.

---
