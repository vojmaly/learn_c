# 🔗 Linked Lists in C (Singly, Doubly, Circular)

Linked lists are dynamic data structures used to store collections of elements. Unlike arrays, linked lists do not require contiguous memory and can grow or shrink during runtime. Each element in a linked list is called a **node**, which contains data and one or more pointers to other nodes.

---

## 🧩 Singly Linked List

A singly linked list consists of nodes where each node points to the next node in the sequence. The last node points to `NULL`.

### 🔹 Structure Definition

```c
struct Node {
    int data;
    struct Node *next;
};
```

### 🔹 Basic Operations

- **Insertion**: At beginning, end, or specific position
- **Deletion**: By value or position
- **Traversal**: Loop through nodes using `next` pointer

### 🔹 Example: Traversal

```c
void traverse(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
```

---

## 🔁 Doubly Linked List

A doubly linked list has nodes with two pointers: one to the next node and one to the previous node. This allows bidirectional traversal.

### 🔹 Structure Definition

```c
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
```

### 🔹 Advantages

- Easier deletion and insertion from both ends
- Bidirectional traversal

### 🔹 Example: Forward and Backward Traversal

```c
void forward(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

void backward(struct Node *tail) {
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
}
```

---

## 🔄 Circular Linked List

In a circular linked list, the last node points back to the first node, forming a loop. It can be singly or doubly linked.

### 🔹 Singly Circular List

```c
struct Node {
    int data;
    struct Node *next;
};
```

- Last node’s `next` points to the head
- No `NULL` termination

### 🔹 Doubly Circular List

```c
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
```

- Last node’s `next` points to head
- Head’s `prev` points to last node

### 🔹 Example: Circular Traversal

```c
void traverse(struct Node *head) {
    struct Node *current = head;
    if (head == NULL) return;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
}
```

---

## 🧠 Comparison Table

| Feature               | Singly Linked List | Doubly Linked List | Circular Linked List |
|-----------------------|--------------------|---------------------|-----------------------|
| Memory per node       | 1 pointer          | 2 pointers          | 1 or 2 pointers       |
| Traversal direction   | One-way            | Two-way             | Depends on type       |
| Last node points to   | NULL               | NULL                | First node            |
| Ease of deletion      | Moderate           | Easier              | Moderate              |
| Use cases             | Simple lists       | Complex navigation  | Circular buffers      |

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create Singly Linked List
Define a singly linked list and insert three nodes. Traverse and print the list.

### ✅ Exercise 2: Insert at End
Write a function to insert a node at the end of a singly linked list. Test it with sample data.

### ✅ Exercise 3: Delete by Value
Create a function that deletes a node by value from a singly linked list. Print the updated list.

### ✅ Exercise 4: Reverse Singly List
Implement a function that reverses a singly linked list. Print the reversed list.

### ✅ Exercise 5: Create Doubly Linked List
Define a doubly linked list and insert nodes at both ends. Traverse forward and backward.

### ✅ Exercise 6: Delete from Doubly List
Write a function to delete a node from a doubly linked list. Handle edge cases like head and tail.

### ✅ Exercise 7: Circular Singly List
Create a circular singly linked list with three nodes. Traverse it in a loop.

### ✅ Exercise 8: Circular Doubly List
Define a circular doubly linked list. Insert nodes and traverse in both directions.

### ✅ Exercise 9: Count Nodes
Write a function that counts the number of nodes in any type of linked list.

### ✅ Exercise 10: Search in List
Implement a search function that finds a value in a linked list and returns its position.
