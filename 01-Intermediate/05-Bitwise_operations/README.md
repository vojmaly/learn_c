# 🧮 Bitwise Operations in C

Bitwise operations in C allow direct manipulation of individual bits within integer data types. These operations are fast and efficient, often used in low-level programming, embedded systems, cryptography, graphics, and performance-critical applications.

---

## 🔹 Bitwise Operators Overview

| Operator | Name              | Description                                 |
|----------|-------------------|---------------------------------------------|
| `&`      | AND               | Sets each bit to 1 if both bits are 1       |
| `|`      | OR                | Sets each bit to 1 if at least one bit is 1 |
| `^`      | XOR               | Sets each bit to 1 if only one bit is 1     |
| `~`      | NOT (Complement)  | Inverts all bits                            |
| `<<`     | Left Shift        | Shifts bits left, adds zeros on the right   |
| `>>`     | Right Shift       | Shifts bits right, discards bits on the right|

---

## 🔸 Bitwise AND (`&`)

Used to mask bits or check if specific bits are set.

```c
#include <stdio.h>

int main() {
    int a = 12;    // 1100
    int b = 10;    // 1010
    int result = a & b;  // 1000 (8)
    printf("AND: %d\n", result);
    return 0;
}
```

---

## 🔸 Bitwise OR (`|`)

Used to set specific bits.

```c
int a = 12;    // 1100
int b = 10;    // 1010
int result = a | b;  // 1110 (14)
```

---

## 🔸 Bitwise XOR (`^`)

Used to toggle bits or detect differences.

```c
int a = 12;    // 1100
int b = 10;    // 1010
int result = a ^ b;  // 0110 (6)
```

---

## 🔸 Bitwise NOT (`~`)

Inverts all bits. Useful for flipping bits or creating masks.

```c
int a = 12;    // 00001100
int result = ~a;  // 11110011 (in two's complement: -13)
```

---

## 🔸 Left Shift (`<<`)

Shifts bits to the left, multiplying the number by powers of 2.

```c
int a = 3;     // 00000011
int result = a << 2;  // 00001100 (12)
```

---

## 🔸 Right Shift (`>>`)

Shifts bits to the right, dividing the number by powers of 2.

```c
int a = 16;    // 00010000
int result = a >> 2;  // 00000100 (4)
```

---

## 🧠 Bit Masking

Bit masking is used to isolate, set, or clear specific bits using bitwise operations.

### 🔹 Example: Check if 3rd Bit is Set

```c
int value = 10;       // 1010
int mask = 1 << 2;    // 0100
if (value & mask) {
    printf("3rd bit is set\n");
}
```

---

## 🧰 Applications of Bitwise Operations

- Flag management
- Permission systems
- Compression algorithms
- Graphics and image processing
- Cryptography
- Embedded systems and device drivers

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Bitwise AND
Write a program that takes two integers and prints their bitwise AND result.

### ✅ Exercise 2: Bitwise OR
Create a program that sets specific bits in an integer using bitwise OR and prints the result.

### ✅ Exercise 3: Bitwise XOR Toggle
Write a program that toggles specific bits in an integer using XOR.

### ✅ Exercise 4: Bitwise NOT
Create a program that inverts all bits of an integer and prints the result.

### ✅ Exercise 5: Left Shift Multiplication
Write a program that multiplies an integer by 8 using left shift and prints the result.

### ✅ Exercise 6: Right Shift Division
Create a program that divides an integer by 4 using right shift and prints the result.

### ✅ Exercise 7: Bit Masking
Write a program that checks if the 5th bit of an integer is set using a bitmask.

### ✅ Exercise 8: Set and Clear Bits
Create a program that sets and clears specific bits in an integer using bitwise operations.

### ✅ Exercise 9: Count Set Bits
Write a function that counts the number of bits set to 1 in an integer.

### ✅ Exercise 10: Swap Two Numbers
Implement a program that swaps two integers using XOR without using a temporary variable.
