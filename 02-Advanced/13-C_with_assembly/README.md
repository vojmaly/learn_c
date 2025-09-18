# 🧬 C with Assembly: Inline Assembly in C

Inline assembly allows embedding assembly instructions directly within C code. This technique provides low-level control over hardware, performance optimization, and access to processor-specific instructions. It is commonly used in embedded systems, cryptography, and performance-critical applications.

---

## 🔹 Why Use Inline Assembly?

- Direct access to CPU instructions
- Optimize performance-critical sections
- Interface with hardware registers
- Implement atomic operations
- Use instructions not available in C

---

## 🔸 Syntax Overview (GCC)

GCC uses the `asm` or `__asm__` keyword for inline assembly.

```c
asm("assembly code");
```

Or with extended syntax:

```c
__asm__ __volatile__ (
    "assembly code"
    : output operands
    : input operands
    : clobbered registers
);
```

---

## 🔹 Basic Example

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3, result;
    asm("addl %%ebx, %%eax"
        : "=a"(result)
        : "a"(a), "b"(b)
    );
    printf("Result: %d\n", result);  // Output: 8
    return 0;
}
```

- `"addl %%ebx, %%eax"`: Adds `ebx` to `eax`
- `: "=a"(result)`: Output in `eax`
- `: "a"(a), "b"(b)`: Inputs in `eax` and `ebx`

---

## 🔹 Volatile Keyword

Use `__volatile__` to prevent the compiler from optimizing or reordering the assembly block.

```c
__asm__ __volatile__("nop");
```

---

## 🔹 Output and Input Operands

Operands allow passing values between C and assembly.

```c
int x = 10, y;
asm("movl %1, %0"
    : "=r"(y)
    : "r"(x)
);
```

- `%0`, `%1`: Refer to operands
- `"=r"`: Output in any register
- `"r"`: Input from any register

---

## 🔹 Clobbered Registers

Specify registers modified by assembly to inform the compiler.

```c
asm("movl $0, %%eax"
    :
    :
    : "%eax"
);
```

---

## 🔹 Inline Assembly with Flags

Use assembly to manipulate CPU flags for condition checks.

```c
int result;
asm("cmp %1, %2; setg %0"
    : "=r"(result)
    : "r"(5), "r"(3)
);
```

Sets `result` to 1 if 5 > 3.

---

## 🔹 Mixing C and Assembly

You can use C variables directly in assembly blocks via operand constraints.

```c
int a = 4, b = 2, c;
asm("imull %1, %2"
    : "=r"(c)
    : "r"(a), "r"(b)
);
```

---

## 🔹 Platform Considerations

- GCC syntax is for x86/x86_64 architectures
- ARM uses different syntax (`__asm` in Keil, `asm volatile` in GCC)
- MSVC uses `__asm` with different rules

---

## 🔹 Best Practices

- Use inline assembly only when necessary
- Comment each instruction for clarity
- Avoid modifying reserved registers
- Test thoroughly across compiler versions
- Prefer extended syntax for portability and safety

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Add Two Numbers  
Write a program that adds two integers using inline assembly and prints the result.

### ✅ Exercise 2: Multiply Using Assembly  
Use inline assembly to multiply two values and store the result in a C variable.

### ✅ Exercise 3: Swap Values  
Implement a function that swaps two integers using assembly instructions.

### ✅ Exercise 4: Bitwise AND  
Perform a bitwise AND operation on two integers using inline assembly.

### ✅ Exercise 5: Compare and Set  
Compare two integers and set a result flag using assembly condition codes.

### ✅ Exercise 6: Use Volatile NOP  
Insert a `nop` instruction using `__volatile__` and verify it appears in the compiled output.

### ✅ Exercise 7: Access CPU Flags  
Use assembly to check if one number is greater than another and return a boolean result.

### ✅ Exercise 8: Register Clobbering  
Write an assembly block that modifies `eax` and declare it as clobbered.

### ✅ Exercise 9: Loop in Assembly  
Implement a loop in inline assembly that counts from 0 to 9 and prints each value.

### ✅ Exercise 10: Inline Assembly Function  
Create a C function that uses inline assembly to calculate factorial of a number.
