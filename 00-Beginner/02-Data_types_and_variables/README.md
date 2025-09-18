# 📘 Data Types and Variables in C

Understanding data types and variables is essential for writing efficient and correct C programs. This guide explains the key concepts and provides detailed training exercises to help you master them—without code examples, so you can implement them yourself.

---

## 🧠 What Are Data Types?

Data types define the kind of data a variable can store. In C, every variable must be declared with a specific type before it can be used.

### 🔹 Primary Data Types

- `int`: Stores whole numbers (positive, negative, or zero)
- `float`: Stores decimal numbers with single precision
- `double`: Stores decimal numbers with double precision
- `char`: Stores a single character
- `void`: Represents no value (used for functions that return nothing)

### 📘 Detailed Overview of C Data Types

This table summarizes the most commonly used data types in C, including their typical size, value range, and format specifiers used for input/output operations.

> [WARNING!]
> Sizes and ranges may vary slightly depending on system architecture and compiler.

---

### 🔹 Integer Types

| Data Type               | Size (bytes) | Range                                      | Format Specifier |
|------------------------|--------------|--------------------------------------------|------------------|
| `short int`            | 2            | -32,768 to 32,767                          | `%hd`            |
| `unsigned short int`   | 2            | 0 to 65,535                                | `%hu`            |
| `int`                  | 4            | -2,147,483,648 to 2,147,483,647            | `%d`             |
| `unsigned int`         | 4            | 0 to 4,294,967,295                         | `%u`             |
| `long int`             | 4            | -2,147,483,648 to 2,147,483,647            | `%ld`            |
| `unsigned long int`    | 4            | 0 to 4,294,967,295                         | `%lu`            |
| `long long int`        | 8            | -(2⁶³) to (2⁶³)-1                          | `%lld`           |
| `unsigned long long int`| 8           | 0 to 18,446,744,073,709,551,615            | `%llu`           |

---

### 🔹 Character Types

| Data Type       | Size (bytes) | Range         | Format Specifier |
|----------------|--------------|---------------|------------------|
| `signed char`  | 1            | -128 to 127   | `%c`             |
| `unsigned char`| 1            | 0 to 255      | `%c`             |

---

### 🔹 Floating Point Types

| Data Type       | Size (bytes) | Range                          | Format Specifier |
|----------------|--------------|--------------------------------|------------------|
| `float`        | 4            | ~1.2E−38 to 3.4E+38            | `%f`             |
| `double`       | 8            | ~1.7E−308 to 1.7E+308          | `%lf`            |
| `long double`  | 16           | ~3.4E−4932 to 1.1E+4932        | `%Lf`            |

### 🧭 Tips

- Use `sizeof(type)` to check actual size on your system.
- Always match format specifiers with the correct data type to avoid runtime errors.
- For precise control over size and portability, consider using fixed-width types from `<stdint.h>` like `int32_t`, `uint64_t`, etc.

### 🔹 Derived Data Types

- **Arrays**: Collection of elements of the same type
- **Pointers**: Store memory addresses
- **Structures**: Group different types into a single unit
- **Unions**: Share memory among different members

### 🔹 Enumeration (`enum`)

Defines a set of named integer constants for better readability and control.

---

## 🧪 What Are Variables?

Variables are named memory locations used to store data. They must be declared with a type and can be initialized with a value.

### 🔹 Declaration Syntax

Use the format: `type variable_name;`

### 🔹 Initialization

You can assign a value at the time of declaration or later in the code.

### 🔹 Naming Rules

- Must begin with a letter or underscore
- Can include letters, digits, and underscores
- Case-sensitive
- Cannot use reserved keywords

---

## 🧮 Constants

Use the `const` keyword to declare variables whose values should not change during program execution.

---

# 🧑‍💻 Training Exercises:

### ✅ Exercise 1: Declare and Print Variables
**Task**: Declare one variable of each primary data type. Assign values and print them with printf using appropriate format specifiers.

---

### ✅ Exercise 2: Use Constants
**Task**: Declare a constant integer and attempt to modify it. Observe the compiler's response and understand why the change is not allowed.

---

### ✅ Exercise 3: Variable Naming Practice
**Task**: Create variables using both valid and invalid names. Try compiling and identify which names cause errors and why.

---

### ✅ Exercise 4: Perform Arithmetic Operations
**Task**: Declare two integer variables and perform addition, subtraction, multiplication, and division. Print each result.

---

### ✅ Exercise 5: Explore Type Conversion
**Task**: Assign an integer to a float and a float to an integer. Print the results and observe how the values change due to implicit and explicit casting.

---

### ✅ Exercise 6: Character Manipulation
**Task**: Declare a character variable and use arithmetic to shift its value (e.g., from 'A' to 'B'). Print the new character.

---

### ✅ Exercise 7: Accept User Input
**Task**: Prompt the user to enter values for an integer, float, and character. Store the inputs in variables and print them back.

---

### ✅ Exercise 8: Swap Two Variables
**Task**: Declare two integer variables and swap their values using a third temporary variable. Print the values before and after swapping.

---

### ✅ Exercise 9: Calculate Area of a Circle
**Task**: Ask the user for the radius of a circle and calculate the area using the formula `π * r * r`. Use a float for π and radius.

---

### ✅ Exercise 10: Understand Variable Scope
**Task**: Declare a variable inside a function and try to access it outside the function. Observe the scope limitations and compiler errors.

---

### ✅ Exercise 11: Test Overflow Behavior
**Task**: Assign a very large value to an integer variable and observe what happens when it exceeds its maximum limit.

---

### ✅ Exercise 12: Practice Format Specifiers
**Task**: Use `printf` with different format specifiers (`%d`, `%f`, `%lf`, `%c`) to display variables of various types correctly.

---

### ✅ Exercise 13: Declare Multiple Variables
**Task**: Declare and initialize multiple variables of the same type in a single line. Print all values to verify correctness.

---

### ✅ Exercise 14: Use `sizeof` Operator
**Task**: Print the size (in bytes) of each primary data type using the `sizeof` operator.

---

### ✅ Exercise 15: Build a Temperature Converter
**Task**: Ask the user for a temperature in Celsius and convert it to Fahrenheit using the formula `F = C * 9/5 + 32`. Display the result.

---

## 🧭 Summary

- Data types define the nature of data stored in variables.
- Variables must be declared before use and follow strict naming rules.
- Constants are immutable and help prevent accidental changes.
- Practicing with real-world tasks strengthens your understanding of how variables behave in different contexts.

