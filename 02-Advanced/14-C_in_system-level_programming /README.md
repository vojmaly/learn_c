# 🧵 C in System-Level Programming (Operating Systems and Drivers)

System-level programming involves writing software that interacts directly with hardware or provides foundational services for other software. C is the dominant language in this domain due to its low-level capabilities, portability, and performance. It is used to build operating systems, device drivers, bootloaders, and embedded firmware.

---

## 🧠 Why C for System Programming?

- Direct access to memory and hardware
- Minimal runtime overhead
- Portability across architectures
- Rich ecosystem of tools and compilers
- Precise control over data structures and execution

---

## 🔹 Key Areas of System-Level Programming

| Area              | Description                                                  |
|-------------------|--------------------------------------------------------------|
| Operating Systems | Kernel, memory management, process scheduling, file systems  |
| Device Drivers    | Interface between OS and hardware peripherals                |
| Bootloaders       | Initialize hardware and load OS                              |
| Embedded Systems  | Control microcontrollers and sensors                         |
| System Utilities  | Low-level tools like shells, daemons, and system monitors    |

---

## 🔧 Low-Level Memory Access

System code often manipulates memory directly using pointers and memory-mapped I/O.

```c
#define VIDEO_MEMORY 0xB8000
char *video = (char *)VIDEO_MEMORY;
video[0] = 'A';      // character
video[1] = 0x07;     // attribute (white on black)
```

---

## 🔧 System Calls

System calls are the interface between user programs and the OS kernel. In Linux, they can be invoked using wrappers or inline assembly.

```c
#include <unistd.h>

int main() {
    write(1, "Hello, world\n", 13);  // syscall to write to stdout
    return 0;
}
```

---

## 🔧 Writing a Simple Kernel (Bare Metal)

```c
void kernel_main() {
    const char *msg = "Kernel started";
    char *video = (char *)0xB8000;
    for (int i = 0; msg[i] != '\0'; i++) {
        video[i * 2] = msg[i];
        video[i * 2 + 1] = 0x07;
    }
    while (1);  // halt
}
```

This runs without an OS, directly on hardware.

---

## 🔧 Writing a Device Driver (Linux Example)

Linux drivers are written as kernel modules.

```c
#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
    printk(KERN_INFO "Driver loaded\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Driver unloaded\n");
}
```

Compile with `make`, load with `insmod`, and unload with `rmmod`.

---

## 🔧 Interrupt Handling

Drivers often handle hardware interrupts.

```c
irqreturn_t handler(int irq, void *dev_id) {
    printk(KERN_INFO "Interrupt received\n");
    return IRQ_HANDLED;
}
```

Register with `request_irq()` and free with `free_irq()`.

---

## 🔧 Accessing I/O Ports

Use `inb()` and `outb()` to read/write to I/O ports.

```c
#include <asm/io.h>

unsigned char data = inb(0x60);  // read from keyboard port
outb(data, 0x64);                // write to controller
```

---

## 🔧 Kernel Space vs User Space

| Feature         | User Space               | Kernel Space              |
|-----------------|--------------------------|---------------------------|
| Privileges      | Limited                  | Full hardware access      |
| Memory Access   | Isolated                 | Global and device memory  |
| Crash Impact    | Process only             | Entire system             |
| API             | Standard libraries       | Kernel APIs               |

---

## 🔧 System-Level Compilation

Use cross-compilers for embedded targets:

```bash
arm-none-eabi-gcc -c kernel.c -o kernel.o
```

Link with linker scripts and bootloaders.

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Direct Memory Write  
Write a program that writes a character directly to video memory at address `0xB8000`.

### ✅ Exercise 2: System Call Wrapper  
Create a wrapper function for the `write` system call and use it to print a message to stdout.

### ✅ Exercise 3: Bare-Metal Kernel  
Implement a minimal kernel that displays a welcome message and halts. Compile it for x86 and run in QEMU.

### ✅ Exercise 4: Linux Kernel Module  
Write a kernel module that logs a message when loaded and unloaded. Compile and insert it using `insmod`.

### ✅ Exercise 5: Interrupt Handler  
Register an interrupt handler for a dummy IRQ. Log a message when the interrupt is triggered.

### ✅ Exercise 6: I/O Port Access  
Read a byte from the keyboard controller using `inb()` and write it back using `outb()`.

### ✅ Exercise 7: User vs Kernel Space  
Write two programs: one that accesses memory in user space, and one that attempts to access kernel space. Observe the behavior.

### ✅ Exercise 8: Bootloader Message  
Create a bootloader that prints a message using BIOS interrupts. Chain it to a kernel binary.

### ✅ Exercise 9: Cross-Compilation  
Set up a cross-compiler for ARM. Compile a simple C program and run it on an emulator.

### ✅ Exercise 10: Memory-Mapped I/O  
Simulate a memory-mapped device. Write a driver that reads and writes to its registers using pointer arithmetic.
