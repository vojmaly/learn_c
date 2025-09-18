# 🧱 Structures and Unions in C

Structures and unions are user-defined data types in C that allow grouping multiple variables under a single name. They are essential for organizing complex data, modeling real-world entities, and building data structures like linked lists, trees, and records.

---

## 🧩 Structures in C

A structure is a collection of variables (members) of different data types grouped together.

### 🔹 Syntax

```c
struct StructureName {
    type member1;
    type member2;
    ...
};
```

### 🔹 Example

```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1 = {"Alice", 30, 5.6};
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);
    return 0;
}
```

### 🔹 Accessing Members

Use the dot operator (`.`) for direct access:

```c
p1.age = 31;
```

Use the arrow operator (`->`) when using a pointer to a structure:

```c
struct Person *ptr = &p1;
ptr->age = 32;
```

---

## 🧵 Nested Structures

Structures can contain other structures as members.

```c
struct Date {
    int day, month, year;
};

struct Event {
    char title[50];
    struct Date date;
};
```

Access nested members:

```c
event.date.day = 15;
```

---

## 🧠 Array of Structures

You can create arrays of structures to store multiple records.

```c
struct Student {
    char name[30];
    int score;
};

struct Student class[50];
```

---

## 🧰 Unions in C

A union is similar to a structure, but all members share the same memory location. Only one member can hold a value at a time.

### 🔹 Syntax

```c
union UnionName {
    type member1;
    type member2;
    ...
};
```

### 🔹 Example

```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;
    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    // d.i is now overwritten
    return 0;
}
```

### 🔹 Key Differences from Structures

| Feature         | Structure               | Union                    |
|-----------------|-------------------------|--------------------------|
| Memory          | Separate for each member| Shared among all members|
| Access          | All members at once     | One member at a time     |
| Use case        | Composite data          | Variant data             |

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Define and Use a Structure
Create a structure to store a book's title, author, and price. Declare a variable of this structure and print its contents.

### ✅ Exercise 2: Modify Structure Members
Define a structure for a car with brand, model, and year. Assign values and update one of the fields. Print the updated structure.

### ✅ Exercise 3: Pointer to Structure
Create a structure for a student. Use a pointer to access and modify its members. Print the final values.

### ✅ Exercise 4: Array of Structures
Define a structure for a product. Create an array of 5 products and fill each with sample data. Print all products.

### ✅ Exercise 5: Nested Structure
Create a structure for an employee that includes a nested structure for address. Assign values and print the full record.

### ✅ Exercise 6: Union Value Overwrite
Define a union with an integer, float, and string. Assign values to each member one after another and print them. Observe how values are overwritten.

### ✅ Exercise 7: Compare Structure and Union Sizes
Create a structure and a union with identical members. Use `sizeof()` to compare their memory usage.

### ✅ Exercise 8: Structure Function Argument
Write a function that takes a structure as an argument and prints its members. Call the function with a sample structure.

### ✅ Exercise 9: Union for Variant Data
Use a union to store either an integer or a float based on user input. Print the stored value accordingly.

### ✅ Exercise 10: Structure with Dynamic Memory
Create a structure with a pointer to a dynamically allocated string. Assign a value, print it, and free the memory.
