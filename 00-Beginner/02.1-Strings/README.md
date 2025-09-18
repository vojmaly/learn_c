# 🧵 Strings in C

In C, strings are a sequence of characters terminated by a null character (`'\0'`). Unlike some other languages, C does not have a built-in string type—strings are handled as arrays of characters. This guide explains how strings work in C, how to declare and manipulate them, and includes practical code examples.

---

## 📚 What Is a String in C?

A string in C is essentially a character array ending with a null character (`'\0'`). This null character marks the end of the string and is crucial for string-handling functions to work correctly.

### 🔹 Declaration and Initialization

```c
char name[10] = "Alice";
```

This creates a character array with the contents: `'A'`, `'l'`, `'i'`, `'c'`, `'e'`, `'\0'`, followed by unused space.

You can also initialize character-by-character:

```c
char name[] = {'A', 'l', 'i', 'c', 'e', '\0'};
```

---

## 🧾 Input and Output of Strings

### 🔹 Using `scanf()` and `printf()`

```c
#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  // reads until whitespace
    printf("Hello, %s!\n", name);
    return 0;
}
```

⚠️ `scanf()` with `%s` stops reading at the first whitespace. For full lines, use `fgets()`.

### 🔹 Using `fgets()` and `puts()`

```c
#include <stdio.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    puts(sentence);
    return 0;
}
```

---

## 🧰 Common String Functions (`<string.h>`)

| Function         | Description                                 |
|------------------|---------------------------------------------|
| `strlen(str)`    | Returns the length of the string            |
| `strcpy(dest, src)` | Copies `src` into `dest`                |
| `strcat(dest, src)` | Appends `src` to `dest`                 |
| `strcmp(str1, str2)` | Compares two strings                   |
| `strchr(str, ch)` | Finds first occurrence of `ch` in `str`   |
| `strstr(str, substr)` | Finds first occurrence of substring   |

### 🔹 Example: String Length and Comparison

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    printf("Length of str1: %lu\n", strlen(str1));

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
```

---

## 🧠 String Manipulation Tips

- Always ensure enough space for the null character when declaring string arrays.
- Avoid using `gets()`—it's unsafe and deprecated.
- Use `fgets()` for reading strings with spaces.
- Use `strncpy()` and `strncat()` for safer operations with size limits.

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Declare and Print a String
**Task**: Declare a string and initialize it with your name. Use `printf()` to display it.

---

### ✅ Exercise 2: Read a String from User
**Task**: Use `scanf()` to read a word from the user and print a greeting message using that word.

---

### ✅ Exercise 3: Read a Full Sentence
**Task**: Use `fgets()` to read a full sentence from the user and display it using `puts()`.

---

### ✅ Exercise 4: String Length
**Task**: Use `strlen()` to calculate and print the length of a user-entered string.

---

### ✅ Exercise 5: String Copy
**Task**: Declare two strings. Copy one into the other using `strcpy()` and print both.

---

### ✅ Exercise 6: String Concatenation
**Task**: Read two strings from the user and concatenate them using `strcat()`. Display the result.

---

### ✅ Exercise 7: String Comparison
**Task**: Read two strings and compare them using `strcmp()`. Print whether they are equal or not.

---

### ✅ Exercise 8: Find a Character
**Task**: Read a string and a character from the user. Use `strchr()` to find the character in the string and print its position.

---

### ✅ Exercise 9: Find a Substring
**Task**: Read a string and a substring. Use `strstr()` to check if the substring exists in the string and display the result.

---

### ✅ Exercise 10: Reverse a String
**Task**: Write a function that reverses a string entered by the user and prints the reversed version.

---

## 🧭 Summary

- Strings in C are arrays of characters ending with `'\0'`.
- Use `<string.h>` for built-in string manipulation functions.
- Always manage memory carefully to avoid buffer overflows.
- Practice reading, writing, and manipulating strings to build strong fundamentals.

---
