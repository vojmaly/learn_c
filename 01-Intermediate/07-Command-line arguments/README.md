# 💻 Command-Line Arguments in C

Command-line arguments allow users to pass input values to a C program when it is executed. This enables dynamic behavior without modifying the source code, making programs more flexible and interactive.

---

## 🧠 How Command-Line Arguments Work

In C, command-line arguments are handled through the `main()` function parameters:

```c
int main(int argc, char *argv[])
```

- `argc` (argument count): Number of arguments passed, including the program name.
- `argv` (argument vector): Array of strings representing the arguments.

---

## 🔹 Example: Basic Usage

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

If the program is run as:

```
./program Hello World
```

Output will be:

```
Total arguments: 3
Argument 0: ./program
Argument 1: Hello
Argument 2: World
```

---

## 🔸 Accessing Arguments

Arguments are accessed using array indexing:

```c
char *firstArg = argv[1];
```

Always check `argc` before accessing `argv[i]` to avoid out-of-bounds errors.

---

## 🔸 Converting Arguments

Arguments are passed as strings. Use functions like `atoi()`, `atof()`, or `sscanf()` to convert them to numeric types.

```c
#include <stdlib.h>

int num = atoi(argv[1]);  // convert string to int
```

---

## 🔸 Practical Use Cases

- Passing filenames, configuration options, or flags
- Controlling program behavior (e.g., verbose mode)
- Supplying input data without hardcoding

---

## 🔸 Advanced Parsing

For complex argument parsing, use libraries or custom logic to handle flags, options, and values.

```c
if (strcmp(argv[1], "-v") == 0) {
    printf("Verbose mode enabled\n");
}
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Print All Arguments
Write a program that prints all command-line arguments passed to it, including the program name.

### ✅ Exercise 2: Count Arguments
Create a program that counts and displays the number of arguments provided.

### ✅ Exercise 3: Sum of Integers
Write a program that accepts two integers as arguments, adds them, and prints the result.

### ✅ Exercise 4: Reverse Arguments
Create a program that prints the command-line arguments in reverse order.

### ✅ Exercise 5: Argument Validation
Write a program that checks if exactly three arguments are passed. If not, print an error message.

### ✅ Exercise 6: Convert and Multiply
Accept two numeric arguments, convert them to integers, multiply them, and display the result.

### ✅ Exercise 7: Filename Input
Write a program that takes a filename as an argument and prints a message confirming the file name.

### ✅ Exercise 8: Flag Detection
Create a program that detects a `-v` flag and prints "Verbose mode" if present.

### ✅ Exercise 9: Argument Lengths
Write a program that prints the length of each command-line argument.

### ✅ Exercise 10: Argument Concatenation
Create a program that concatenates all arguments into a single string and prints it.
