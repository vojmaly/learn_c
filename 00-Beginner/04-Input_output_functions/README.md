# 📥📤 Input and Output Functions in C

Input and output (I/O) functions in C are used to interact with the user or external systems. They allow programs to receive data (input) and display results (output). This guide covers the most commonly used I/O functions in C, their syntax, behavior, and practical usage, followed by training exercises to help you master them.

---

## 🖨️ Output Functions

### `printf()`
- Used to display formatted output to the console.
- Defined in the `stdio.h` header file.
- Supports format specifiers to print different data types.

#### Common Format Specifiers:
| Specifier | Description         |
|-----------|---------------------|
| `%d`      | Integer              |
| `%f`      | Float                |
| `%lf`     | Double               |
| `%c`      | Character            |
| `%s`      | String               |
| `%u`      | Unsigned int         |
| `%x`      | Hexadecimal          |
| `%p`      | Pointer address      |

#### Notes:
- You can combine text and variables in a single `printf()` call.
- Use escape sequences like `\n` for newline and `\t` for tab.

---

## 🧾 Input Functions

### `scanf()`
- Used to read formatted input from the user.
- Also defined in `stdio.h`.
- Requires the address of the variable using the `&` operator.

#### Example Format Specifiers:
| Specifier | Description         |
|-----------|---------------------|
| `%d`      | Reads an integer     |
| `%f`      | Reads a float        |
| `%lf`     | Reads a double       |
| `%c`      | Reads a character    |
| `%s`      | Reads a string       |

#### Notes:
- Strings read with `%s` stop at whitespace.
- Always validate user input to avoid unexpected behavior.

---

## 🧠 Additional I/O Functions

### `getchar()` and `putchar()`
- `getchar()` reads a single character from input.
- `putchar()` writes a single character to output.

### `gets()` and `puts()` *(Deprecated)*
- `gets()` reads a string including spaces (unsafe, avoid using).
- `puts()` prints a string followed by a newline.

### `fgets()` and `fputs()`
- Safer alternatives to `gets()` and `puts()`.
- `fgets()` reads a line of text with buffer size.
- `fputs()` writes a string to output.

---

## 🧑‍💻 Training Exercises (No Code Examples)

### ✅ Exercise 1: Basic Output
**Task**: Use `printf()` to display a welcome message and print values of different data types (int, float, char, string).

---

### ✅ Exercise 2: Basic Input
**Task**: Use `scanf()` to read an integer, a float, and a character from the user. Print the values back using `printf()`.

---

### ✅ Exercise 3: String Input
**Task**: Use `scanf()` with `%s` to read a name. Then use `printf()` to greet the user by name.

---

### ✅ Exercise 4: Character I/O
**Task**: Use `getchar()` to read a character and `putchar()` to display it. Include a message showing what was entered.

---

### ✅ Exercise 5: Multi-line Input
**Task**: Use `fgets()` to read a full sentence from the user. Display it using `fputs()`.

---

### ✅ Exercise 6: Formatted Output
**Task**: Display a table of values using `printf()` with tabs and newlines to format the output neatly.

---

### ✅ Exercise 7: Input Validation
**Task**: Prompt the user to enter an integer. Check if the input is valid and within a specific range. Display appropriate messages.

---

### ✅ Exercise 8: Read and Display Multiple Values
**Task**: Ask the user to enter three numbers. Read them using `scanf()` and display their sum and average using `printf()`.

---

### ✅ Exercise 9: Read and Echo a Paragraph
**Task**: Use `fgets()` to read a paragraph of text. Display the same paragraph back to the user.

---

### ✅ Exercise 10: Interactive Prompt
**Task**: Create a simple interactive prompt that asks for the user's name, age, and favorite character. Display a summary using formatted output.

---

## 🧭 Summary

- `printf()` and `scanf()` are the core I/O functions in C.
- Format specifiers control how data is read and displayed.
- Use `getchar()`, `putchar()`, `fgets()`, and `fputs()` for more control over character and string I/O.
- Always validate input and handle edge cases to build robust programs.

---

