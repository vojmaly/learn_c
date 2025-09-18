# 📂 File Handling in C

File handling in C allows programs to read from and write to files stored on disk. This is essential for data persistence, configuration management, logging, and working with large datasets. C provides a set of standard library functions for file operations through the `<stdio.h>` header.

---

## 📄 File Operations Overview

C supports the following basic file operations:

- Create and open a file
- Read from a file
- Write to a file
- Close a file

All file operations use a `FILE` pointer to manage the file stream.

---

## 🔹 Opening a File

Use `fopen()` to open a file. It returns a pointer to a `FILE` object.

### 🔸 Syntax

```c
FILE *fopen(const char *filename, const char *mode);
```

### 🔸 Modes

| Mode | Description                      |
|------|----------------------------------|
| `"r"`  | Read (file must exist)         |
| `"w"`  | Write (creates or truncates)   |
| `"a"`  | Append (creates if not exists) |
| `"r+"` | Read and write                 |
| `"w+"` | Write and read (truncates)     |
| `"a+"` | Append and read                |

### 🔸 Example

```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL) {
    printf("File not found.\n");
}
```

---

## 📝 Writing to a File

Use `fprintf()` or `fputs()` to write text to a file.

### 🔸 Example

```c
FILE *fp = fopen("output.txt", "w");
fprintf(fp, "Hello, file!\n");
fputs("Another line.\n", fp);
fclose(fp);
```

---

## 📖 Reading from a File

Use `fscanf()`, `fgets()`, or `fgetc()` to read data from a file.

### 🔸 Example

```c
FILE *fp = fopen("input.txt", "r");
char buffer[100];
while (fgets(buffer, 100, fp)) {
    printf("%s", buffer);
}
fclose(fp);
```

---

## ❌ Closing a File

Always close a file using `fclose()` to release resources.

```c
fclose(fp);
```

---

## 🔍 Checking for Errors

Use `ferror()` and `feof()` to detect file errors or end-of-file conditions.

```c
if (feof(fp)) {
    printf("End of file reached.\n");
}
if (ferror(fp)) {
    printf("File error occurred.\n");
}
```

---

## 📦 Binary File Operations

Use `fread()` and `fwrite()` for binary data.

### 🔸 Example

```c
FILE *fp = fopen("data.bin", "wb");
int nums[5] = {1, 2, 3, 4, 5};
fwrite(nums, sizeof(int), 5, fp);
fclose(fp);
```

---

## 🧠 File Pointer Positioning

Use `ftell()`, `fseek()`, and `rewind()` to control the file pointer.

```c
long pos = ftell(fp);       // current position
fseek(fp, 0, SEEK_SET);     // move to beginning
rewind(fp);                 // shortcut to beginning
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create and Write to File
Create a program that opens a file in write mode and writes three lines of text to it.

### ✅ Exercise 2: Read File Line by Line
Open a file in read mode and print each line to the console using `fgets()`.

### ✅ Exercise 3: Append Data to File
Open a file in append mode and add a new line of text without overwriting existing content.

### ✅ Exercise 4: Count Characters in File
Read a file character by character using `fgetc()` and count the total number of characters.

### ✅ Exercise 5: Copy File Contents
Read from one file and write its contents to another file line by line.

### ✅ Exercise 6: Binary File Write and Read
Write an array of integers to a binary file using `fwrite()`. Then read it back using `fread()` and print the values.

### ✅ Exercise 7: File Pointer Navigation
Open a file and use `fseek()` to skip the first 10 bytes. Read and print the rest of the file.

### ✅ Exercise 8: Detect End of File
Read a file using a loop and detect when the end of file is reached using `feof()`.

### ✅ Exercise 9: Error Handling
Attempt to open a non-existent file and handle the error gracefully using `ferror()`.

### ✅ Exercise 10: Structured Data Logging
Define a structure and write multiple records to a binary file. Read them back and display the data.
