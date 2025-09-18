# 🔢 Enumerations in C

Enumerations (enums) in C are user-defined data types that consist of a set of named integer constants. They improve code readability, maintainability, and help represent a group of related values with meaningful names.

---

## 🧠 Why Use Enums?

- Replace magic numbers with descriptive names
- Group related constants under a single type
- Improve code clarity and reduce errors
- Useful in switch statements, state machines, and configuration flags

---

## 🔹 Declaring an Enum

### 🔸 Syntax

```c
enum EnumName {
    CONSTANT1,
    CONSTANT2,
    ...
};
```

Each constant is assigned an integer value starting from 0 by default, unless explicitly specified.

### 🔸 Example

```c
#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day today = WEDNESDAY;
    printf("Day number: %d\n", today);  // Output: 2
    return 0;
}
```

---

## 🔸 Custom Values

You can assign specific integer values to enum constants.

```c
enum Status {
    OK = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};
```

---

## 🔸 Enum Variables

Declare variables of enum type to store one of the defined constants.

```c
enum Status currentStatus;
currentStatus = OK;
```

---

## 🔸 Enums in Switch Statements

Enums work well with `switch` for handling multiple states.

```c
switch (currentStatus) {
    case OK:
        printf("Everything is fine.\n");
        break;
    case NOT_FOUND:
        printf("Resource not found.\n");
        break;
}
```

---

## 🔸 Anonymous Enums

Enums can be declared without a name when used immediately.

```c
enum {
    RED,
    GREEN,
    BLUE
} color;
```

---

## 🔸 Enum vs `#define`

| Feature         | `enum`                         | `#define`                      |
|-----------------|--------------------------------|--------------------------------|
| Type safety     | Yes                            | No                             |
| Debugging       | Easier (symbolic names)        | Harder                         |
| Scope control   | Scoped within enum             | Global                         |
| Grouping        | Logical grouping of constants  | No grouping                    |

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Define Basic Enum
Create an enum for the days of the week. Assign a variable and print its integer value.

### ✅ Exercise 2: Custom Enum Values
Define an enum for HTTP status codes with custom values. Print the value of one of the codes.

### ✅ Exercise 3: Enum in Switch
Use an enum to represent traffic light states. Write a switch statement that prints actions based on the current state.

### ✅ Exercise 4: Enum Array
Create an array of enum values representing months. Print each month's name and corresponding value.

### ✅ Exercise 5: Enum Comparison
Write a function that compares two enum values and returns whether they are equal.

### ✅ Exercise 6: Enum with Struct
Define a structure that includes an enum member representing a user role. Assign and print the role.

### ✅ Exercise 7: Enum Iteration
Simulate iterating through enum values using a loop and print each one.

### ✅ Exercise 8: Enum Flags
Use an enum to represent permission flags (READ, WRITE, EXECUTE). Combine them using bitwise OR and check with bitwise AND.

### ✅ Exercise 9: Enum Typecasting
Assign an integer to an enum variable and print the result. Discuss implications of typecasting.

### ✅ Exercise 10: Anonymous Enum Usage
Create an anonymous enum for colors and assign a variable. Print its value.
