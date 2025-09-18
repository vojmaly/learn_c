# 🧵 Multithreading in C Using POSIX Threads (pthreads)

Multithreading allows a program to perform multiple tasks concurrently by creating separate threads of execution. In C, the POSIX Threads (pthreads) library provides a standardized API for managing threads on Unix-like systems. It enables parallelism, responsiveness, and efficient resource utilization.

---

## 🔹 What Is a Thread?

A thread is a lightweight unit of execution within a process. All threads in a process share the same memory space but have their own stack and registers.

---

## 🔧 POSIX Threads Overview

To use POSIX threads, include the header:

```c
#include <pthread.h>
```

Compile with the `-pthread` flag:

```bash
gcc program.c -pthread -o program
```

---

## 🔸 Creating a Thread

Use `pthread_create()` to launch a new thread.

```c
void* myFunction(void* arg) {
    printf("Thread running\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, myFunction, NULL);
    pthread_join(thread, NULL);
    return 0;
}
```

- `pthread_t`: Thread identifier
- `pthread_create()`: Starts a new thread
- `pthread_join()`: Waits for a thread to finish

---

## 🔸 Passing Arguments to Threads

Use a pointer to pass data to the thread function.

```c
void* printNumber(void* arg) {
    int num = *(int*)arg;
    printf("Number: %d\n", num);
    return NULL;
}
```

---

## 🔸 Thread Synchronization

Threads may access shared resources, leading to race conditions. Use synchronization primitives to prevent conflicts.

### 🔹 Mutex

```c
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

pthread_mutex_lock(&lock);
// critical section
pthread_mutex_unlock(&lock);
```

### 🔹 Condition Variables

Used for signaling between threads.

```c
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_cond_wait(&cond, &lock);
pthread_cond_signal(&cond);
```

---

## 🔸 Detaching Threads

Detached threads run independently and release resources automatically.

```c
pthread_detach(thread);
```

---

## 🔸 Thread Attributes

Customize thread behavior using `pthread_attr_t`.

```c
pthread_attr_t attr;
pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
```

---

## 🧠 Best Practices

- Always join or detach threads to avoid resource leaks
- Protect shared data with mutexes
- Avoid deadlocks by consistent locking order
- Minimize critical sections for performance
- Use condition variables for thread coordination

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create a Thread
Write a program that creates a thread and prints a message from both the main and the thread.

### ✅ Exercise 2: Pass Argument to Thread
Create a thread that receives an integer argument and prints it.

### ✅ Exercise 3: Multiple Threads
Launch five threads that each print their thread number. Use an array to store thread IDs.

### ✅ Exercise 4: Use Mutex
Create a shared counter accessed by multiple threads. Use a mutex to protect updates.

### ✅ Exercise 5: Race Condition Demo
Write a program that updates a shared variable without synchronization. Observe inconsistent results.

### ✅ Exercise 6: Thread Join
Create multiple threads and use `pthread_join()` to wait for each to finish before exiting.

### ✅ Exercise 7: Detached Thread
Launch a thread in detached mode. Ensure the main program does not wait for it.

### ✅ Exercise 8: Condition Variable
Use a condition variable to signal one thread when another finishes a task.

### ✅ Exercise 9: Thread Attributes
Set thread attributes to create a detached thread. Print confirmation from the thread.

### ✅ Exercise 10: Producer-Consumer
Implement a producer-consumer system using threads, mutexes, and condition variables.
