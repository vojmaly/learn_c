# 📥📤 Input and Output Functions in C

Input and output (I/O) functions are essential for interacting with users and displaying results. C provides a set of standard I/O functions defined in the `stdio.h` library. This guide explains the most commonly used I/O functions with code examples, followed by training exercises to help you practice writing your own programs.

---

## 🖨️ Output Functions

### `printf()`

- Used to display formatted output to the console.
- Syntax:
  ```c
  printf("format string", variable1, variable2, ...);
  ```

#### Example:
```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    return 0;
}
```

#### Format Specifiers:
| Specifier | Type           |
|-----------|----------------|
| `%d`      | Integer         |
| `%f`,`%3f`      | Float, number specify decimal places |
| `%lf`     | Double          |
| `%c`      | Character       |
| `%s`      | String          |
| `%u`      | Unsigned int    |
| `%x`      | Hexadecimal     |
| `%p`      | Pointer address |

---

## 🧾 Input Functions

### `scanf()`

- Used to read formatted input from the user.
- Syntax:
  ```c
  scanf("format string", &variable1, &variable2, ...);
  ```

#### Example:
```c
#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    printf("Enter your age, height, and grade: ");
    scanf("%d %f %c", &age, &height, &grade);
    printf("You entered: %d, %.1f, %c\n", age, height, grade);
    return 0;
}
```

> [!NOTE]
> Always use the address-of operator `&` with `scanf()` except for strings.

---

## 🔡 Character I/O

### `getchar()` and `putchar()`

- `getchar()` reads a single character from input.
- `putchar()` writes a single character to output.

#### Example:
```c
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    return 0;
}
```

---

## 🧵 String I/O

### `gets()` and `puts()` *(Deprecated)*

- `gets()` reads a string including spaces (unsafe).
- `puts()` prints a string followed by a newline.

> ⚠️ `gets()` is unsafe and should be avoided.

### `fgets()` and `fputs()` (Recommended)

- `fgets()` reads a line of text with buffer size.
- `fputs()` writes a string to output.

#### Example:
```c
#include <stdio.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("You entered: ");
    fputs(sentence, stdout);
    return 0;
}
```

---

## 🧑‍💻 Training Exercises (No Code Examples)

### ✅ Exercise 1: Print Variables
**Task**: Declare variables of type `int`, `float`, `char`, and `string`. Use `printf()` to display their values with appropriate format specifiers.

---

### ✅ Exercise 2: Read and Display Input
**Task**: Use `scanf()` to read an integer, a float, and a character from the user. Print the values using `printf()`.

---

### ✅ Exercise 3: Read a Name
**Task**: Use `scanf()` with `%s` to read a user's name. Display a greeting message using `printf()`.

---

### ✅ Exercise 4: Character Echo
**Task**: Use `getchar()` to read a character and `putchar()` to display it. Include a message showing what was entered.

---

### ✅ Exercise 5: Read a Sentence
**Task**: Use `fgets()` to read a full sentence from the user. Display it using `fputs()`.

---

### ✅ Exercise 6: Formatted Table
**Task**: Use `printf()` to display a table of values with headers. Format the output using tabs and newlines.

---

### ✅ Exercise 7: Input Validation
**Task**: Prompt the user to enter an integer. Check if the input is within a specific range and display a message accordingly.

---

### ✅ Exercise 8: Sum and Average
**Task**: Ask the user to enter three numbers. Read them using `scanf()` and display their sum and average using `printf()`.

---

### ✅ Exercise 9: Paragraph Echo
**Task**: Use `fgets()` to read a paragraph of text. Display the same paragraph back to the user.

---

### ✅ Exercise 10: Interactive Summary
**Task**: Create a prompt that asks for the user's name, age, and favorite character. Display a formatted summary using `printf()`.

---

## 🧭 Summary

- `printf()` and `scanf()` are the core I/O functions in C.
- Format specifiers control how data is read and displayed.
- Use `getchar()`, `putchar()`, `fgets()`, and `fputs()` for more control over character and string I/O.
- Always validate input and handle edge cases to build robust programs.

