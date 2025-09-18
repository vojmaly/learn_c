# 🧭 Function Pointers and Callbacks in C

Function pointers in C allow you to store the address of a function and invoke it dynamically. This enables flexible programming patterns such as callbacks, event handling, and implementing function tables. They are especially useful in modular systems, libraries, and embedded programming.

---

## 📌 What Is a Function Pointer?

A function pointer is a variable that stores the address of a function with a specific signature.

### 🔹 Syntax

```c
return_type (*pointer_name)(parameter_list);
```

### 🔹 Example

```c
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    void (*func_ptr)() = greet;
    func_ptr();  // Calls greet()
    return 0;
}
```

---

## 🔧 Function Pointer with Parameters

Function pointers can point to functions with parameters and return values.

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*op)(int, int) = add;
    printf("Sum: %d\n", op(3, 4));  // Output: 7
    return 0;
}
```

---

## 🔁 Array of Function Pointers

Useful for implementing menus, dispatch tables, or operation selectors.

```c
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int (*ops[2])(int, int) = {add, sub};

int main() {
    printf("%d\n", ops[0](5, 3));  // Calls add
    printf("%d\n", ops[1](5, 3));  // Calls sub
    return 0;
}
```

---

## 🔄 Callback Functions

A callback is a function passed as an argument to another function, allowing the called function to invoke it later.

### 🔹 Example

```c
void process(int x, void (*callback)(int)) {
    callback(x);
}

void printSquare(int n) {
    printf("Square: %d\n", n * n);
}

int main() {
    process(5, printSquare);  // Output: Square: 25
    return 0;
}
```

---

## 🧠 Use Cases

- Event handling systems
- Custom sorting or filtering
- Interrupt service routines
- Strategy pattern implementation
- Plugin architectures

---

## ⚠️ Precautions

- Ensure function signatures match
- Avoid calling uninitialized function pointers
- Use typedefs for readability
- Validate pointers before invocation

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Basic Function Pointer
Declare a function pointer and assign it to a simple function. Call the function using the pointer.

### ✅ Exercise 2: Pointer with Parameters
Create a function that takes two integers and returns their product. Use a function pointer to call it.

### ✅ Exercise 3: Array of Function Pointers
Implement an array of function pointers for add, subtract, multiply, and divide. Call each operation using the array.

### ✅ Exercise 4: Callback Mechanism
Write a function that accepts a callback and an integer. Call the callback with the integer as input.

### ✅ Exercise 5: Custom Sort Callback
Use a function pointer as a comparator in a custom sorting function for an array.

### ✅ Exercise 6: Typedef for Function Pointer
Define a typedef for a function pointer and use it to simplify declarations and calls.

### ✅ Exercise 7: Menu System
Create a menu-driven program using function pointers to dispatch user-selected operations.

### ✅ Exercise 8: Pointer to Pointer Function
Write a function that modifies a function pointer passed to it. Use it to switch between two behaviors.

### ✅ Exercise 9: Null Pointer Check
Implement a function that safely calls a function pointer only if it is not `NULL`.

### ✅ Exercise 10: Event Simulation
Simulate an event system where different callbacks are triggered based on input conditions.
