# 📚 Stacks and Queues in C

Stacks and queues are fundamental linear data structures used to organize and manage data efficiently. They differ in how elements are inserted and removed, making them suitable for different types of problems such as parsing, scheduling, and buffering.

---

## 🧱 Stack (LIFO)

A stack follows the **Last In, First Out (LIFO)** principle. The last element added is the first one removed.

### 🔹 Common Operations

- `push`: Add an element to the top
- `pop`: Remove the top element
- `peek`: View the top element without removing it
- `isEmpty`: Check if the stack is empty

### 🔹 Implementation Using Array

```c
#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1; // underflow
}
```

---

## 🔁 Queue (FIFO)

A queue follows the **First In, First Out (FIFO)** principle. The first element added is the first one removed.

### 🔹 Common Operations

- `enqueue`: Add an element to the rear
- `dequeue`: Remove an element from the front
- `peek`: View the front element
- `isEmpty`: Check if the queue is empty

### 🔹 Implementation Using Array

```c
#define SIZE 100
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear < SIZE - 1) {
        queue[++rear] = value;
        if (front == -1) front = 0;
    }
}

int dequeue() {
    if (front <= rear) {
        return queue[front++];
    }
    return -1; // underflow
}
```

---

## 🔄 Circular Queue

A circular queue wraps around when the end of the array is reached, optimizing space usage.

```c
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        // queue is full
    } else {
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        if (front == -1) front = 0;
    }
}
```

---

## 🧵 Stack and Queue Using Linked List

Linked lists allow dynamic memory allocation and avoid fixed-size limitations.

### 🔹 Stack with Linked List

```c
struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
```

### 🔹 Queue with Linked List

```c
struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}
```

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Stack Push and Pop
Create a stack using an array. Implement push and pop operations and print the stack after each operation.

### ✅ Exercise 2: Peek Top Element
Write a function that returns the top element of the stack without removing it. Test it with sample data.

### ✅ Exercise 3: Stack Overflow and Underflow
Modify the stack implementation to detect and handle overflow and underflow conditions.

### ✅ Exercise 4: Queue Enqueue and Dequeue
Create a queue using an array. Implement enqueue and dequeue operations and print the queue after each operation.

### ✅ Exercise 5: Circular Queue
Implement a circular queue using an array. Test wrap-around behavior by inserting and removing elements.

### ✅ Exercise 6: Stack Using Linked List
Create a stack using a linked list. Implement push, pop, and display operations.

### ✅ Exercise 7: Queue Using Linked List
Create a queue using a linked list. Implement enqueue, dequeue, and display operations.

### ✅ Exercise 8: Reverse Stack
Write a function that reverses a stack using another stack or recursion.

### ✅ Exercise 9: Palindrome Using Stack
Check if a string is a palindrome using a stack to compare characters.

### ✅ Exercise 10: Queue Simulation
Simulate a ticket counter using a queue. Add customers and serve them in order.
