# 🧮 Arrays and 🧵 Strings in C

Arrays and strings are fundamental data structures in C that allow you to store and manipulate collections of data. Arrays hold multiple values of the same type, while strings are specialized arrays of characters ending with a null terminator (`'\0'`). This guide provides a detailed explanation of both, complete with code examples and practical exercises to reinforce your understanding.

---

## 🔢 Arrays in C

An **array** is a collection of elements of the same data type stored in contiguous memory locations.

### 🔹 Declaration and Initialization

```c
int numbers[5];               // Declaration
int scores[3] = {90, 85, 78}; // Initialization
```

You can also initialize partially:

```c
int values[5] = {1, 2}; // Remaining elements are set to 0
```

### 🔹 Accessing Elements

Use the index (starting from 0):

```c
printf("%d", scores[1]); // Outputs 85
```

### 🔹 Modifying Elements

```c
scores[2] = 88;
```

### 🔹 Iterating Through Arrays

```c
for (int i = 0; i < 3; i++) {
    printf("%d\n", scores[i]);
}
```

---

## 🧵 Strings in C

A **string** is an array of characters terminated by a null character (`'\0'`).

### 🔹 Declaration and Initialization

```c
char name[6] = "Alice"; // Includes null terminator
```

Or character-by-character:

```c
char name[] = {'A', 'l', 'i', 'c', 'e', '\0'};
```

### 🔹 Input and Output

```c
char city[50];
scanf("%s", city);      // Reads until whitespace
printf("City: %s\n", city);
```

Use `fgets()` for full lines:

```c
fgets(city, sizeof(city), stdin);
```

---

## 📚 String Functions (`<string.h>`)

| Function         | Description                                 |
|------------------|---------------------------------------------|
| `strlen(str)`    | Returns the length of the string            |
| `strcpy(dest, src)` | Copies `src` into `dest`                |
| `strcat(dest, src)` | Appends `src` to `dest`                 |
| `strcmp(str1, str2)` | Compares two strings                   |
| `strchr(str, ch)` | Finds first occurrence of `ch` in `str`   |
| `strstr(str, substr)` | Finds first occurrence of substring   |

### 🔹 Example: String Comparison

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
```

---

## 🧠 Multidimensional Arrays

Arrays can have more than one dimension.

### 🔹 Example: 2D Array

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Accessing an element:

```c
printf("%d", matrix[1][2]); // Outputs 6
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Declare and Initialize an Array
**Task**: Create an integer array with 5 elements. Assign values and print each one using a loop.

---

### ✅ Exercise 2: Find Maximum in Array
**Task**: Read 10 integers into an array. Use a loop to find and print the maximum value.

---

### ✅ Exercise 3: Reverse Array Elements
**Task**: Store 5 numbers in an array. Print them in reverse order.

---

### ✅ Exercise 4: Sum of Array Elements
**Task**: Create an array of 7 integers. Calculate and print the sum of all elements.

---

### ✅ Exercise 5: String Input and Output
**Task**: Read a name from the user and print a greeting message using that name.

---

### ✅ Exercise 6: String Length
**Task**: Read a string and use `strlen()` to display its length.

---

### ✅ Exercise 7: Copy and Compare Strings
**Task**: Read two strings. Use `strcpy()` to copy one into another and `strcmp()` to compare them. Print the results.

---

### ✅ Exercise 8: Concatenate Strings
**Task**: Read two strings and use `strcat()` to join them. Display the final string.

---

### ✅ Exercise 9: Search Character in String
**Task**: Read a string and a character. Use `strchr()` to find the character in the string and print its position.

---

### ✅ Exercise 10: 2D Array Matrix
**Task**: Create a 3x3 matrix. Fill it with values and print the matrix in grid format.

---

## 🧭 Summary

- Arrays store multiple values of the same type in contiguous memory.
- Strings are character arrays ending with `'\0'`.
- Use loops to process arrays and strings efficiently.
- The `<string.h>` library provides powerful functions for string manipulation.
- Mastering arrays and strings is essential for handling structured data in C.
