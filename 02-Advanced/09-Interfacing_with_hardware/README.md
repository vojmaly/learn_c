# 🔌 Interfacing with Hardware and Embedded Systems in C

Interfacing with hardware and embedded systems using C involves direct communication with physical components such as sensors, actuators, displays, and microcontrollers. C is widely used in embedded development due to its low-level access, efficiency, and portability across platforms.

---

## 🧠 What Is Embedded Programming?

Embedded programming refers to writing software that runs on microcontrollers or microprocessors embedded within devices. These systems often have limited resources and are designed for specific tasks.

---

## 🔹 Key Concepts

- **Registers**: Memory-mapped hardware control points
- **GPIO (General Purpose I/O)**: Pins used to read or write digital signals
- **Interrupts**: Hardware-triggered events that pause normal execution
- **Timers**: Used for delays, scheduling, and time-based control
- **Memory-mapped I/O**: Accessing hardware by reading/writing specific memory addresses

---

## 🔧 Accessing Hardware Registers

Registers are accessed using pointers to specific memory addresses.

```c
#define LED_PORT (*(volatile unsigned int*)0x40021018)
```

- `volatile`: Prevents compiler optimization
- `*`: Dereferences the address to access the register

---

## 🔸 GPIO Control Example

```c
#define GPIO_OUTPUT (*(volatile unsigned int*)0x50000000)

void setPinHigh() {
    GPIO_OUTPUT |= (1 << 3);  // Set bit 3
}

void setPinLow() {
    GPIO_OUTPUT &= ~(1 << 3); // Clear bit 3
}
```

---

## 🔸 Interrupt Handling

Interrupts allow hardware to signal the processor asynchronously.

```c
void __attribute__((interrupt)) ISR() {
    // interrupt service routine
}
```

- Requires configuration in the microcontroller’s interrupt vector table

---

## 🔸 Embedded C vs. Standard C

| Feature             | Embedded C                     | Standard C                   |
|---------------------|--------------------------------|------------------------------|
| Memory access       | Direct register manipulation   | Abstracted memory model      |
| Libraries           | Minimal or custom              | Standard C library available |
| I/O                 | GPIO, UART, SPI, I2C           | File and console I/O         |
| Environment         | Bare-metal or RTOS             | OS-based                     |

---

## 🔸 Communication Protocols

- **UART**: Serial communication
- **SPI**: High-speed synchronous data transfer
- **I2C**: Multi-device communication with addressing
- **CAN**: Automotive and industrial networks

Each protocol requires configuring registers and handling timing and data framing.

---

## 🔸 Real-Time Operating Systems (RTOS)

RTOS provides multitasking, scheduling, and synchronization for embedded systems.

- Tasks and threads
- Semaphores and mutexes
- Timers and delays
- Priority-based execution

---

## 🧠 Best Practices

- Use `volatile` for hardware registers
- Minimize use of dynamic memory
- Avoid blocking delays in time-sensitive code
- Use modular drivers for hardware abstraction
- Test with simulators and hardware debuggers
- Document register maps and pin configurations

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Toggle GPIO Pin
Write a program that sets and clears a GPIO pin using memory-mapped I/O.

### ✅ Exercise 2: LED Blinking
Create a delay loop and use it to blink an LED connected to a GPIO pin.

### ✅ Exercise 3: Button Input
Read the state of a button using a GPIO input pin and print its status.

### ✅ Exercise 4: UART Transmission
Configure UART registers and send a string over serial communication.

### ✅ Exercise 5: Interrupt Trigger
Set up an external interrupt that toggles an LED when a button is pressed.

### ✅ Exercise 6: Timer-Based LED
Use a hardware timer to blink an LED at regular intervals without blocking.

### ✅ Exercise 7: SPI Communication
Implement SPI transmission to send data to a peripheral device.

### ✅ Exercise 8: I2C Sensor Read
Read temperature data from an I2C sensor and display the result.

### ✅ Exercise 9: RTOS Task Scheduling
Create two tasks in an RTOS that run at different intervals and toggle separate LEDs.

### ✅ Exercise 10: Memory-Mapped Display
Write characters to a memory-mapped LCD display using register access.
