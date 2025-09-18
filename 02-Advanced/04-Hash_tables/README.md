# 🗃️ Hash Tables in C

Hash tables are data structures that store key-value pairs and provide fast access to data using a hash function. They are widely used in applications requiring quick lookups, such as symbol tables, caches, and dictionaries.

---

## 🧠 How Hash Tables Work

A hash table uses a **hash function** to convert a key into an index in an array. The value is stored at that index. If multiple keys hash to the same index, a **collision** occurs, which must be resolved.

---

## 🔹 Components of a Hash Table

- **Hash Function**: Converts a key into an array index
- **Array (Bucket List)**: Stores values at hashed indices
- **Collision Resolution**: Handles multiple keys mapping to the same index

---

## 🔸 Hash Function Example

```c
int hash(int key, int size) {
    return key % size;
}
```

This simple modulo-based hash function maps keys to indices within the array size.

---

## 🔸 Structure Definition

```c
#define SIZE 10

struct HashItem {
    int key;
    int value;
};

struct HashItem* hashTable[SIZE];
```

---

## 🔸 Insertion with Linear Probing

Linear probing resolves collisions by checking the next available slot.

```c
void insert(int key, int value) {
    int index = hash(key, SIZE);
    while (hashTable[index] != NULL) {
        index = (index + 1) % SIZE;
    }
    hashTable[index] = malloc(sizeof(struct HashItem));
    hashTable[index]->key = key;
    hashTable[index]->value = value;
}
```

---

## 🔸 Search Operation

```c
int search(int key) {
    int index = hash(key, SIZE);
    while (hashTable[index] != NULL) {
        if (hashTable[index]->key == key)
            return hashTable[index]->value;
        index = (index + 1) % SIZE;
    }
    return -1; // not found
}
```

---

## 🔸 Deletion Operation

To delete an item, mark the slot as deleted or use a special placeholder to maintain probing integrity.

---

## 🔸 Collision Resolution Techniques

| Technique         | Description                                      |
|-------------------|--------------------------------------------------|
| Linear Probing    | Search next slot sequentially                    |
| Quadratic Probing | Search slots using quadratic intervals           |
| Chaining          | Use linked lists at each index to store multiple items |
| Double Hashing    | Use a second hash function to resolve collisions |

---

## 🧠 Advantages of Hash Tables

- Fast average-case lookup, insertion, and deletion (O(1))
- Efficient for large datasets
- Flexible key-value mapping

---

## ⚠️ Limitations

- Poor worst-case performance with many collisions
- Requires good hash function
- Fixed-size arrays can lead to overflow
- Not suitable for ordered data

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Basic Hash Table
Create a hash table using an array. Implement a simple hash function and insert key-value pairs.

### ✅ Exercise 2: Search in Hash Table
Write a function that searches for a key in the hash table and returns its value.

### ✅ Exercise 3: Handle Collisions
Implement linear probing to resolve collisions during insertion.

### ✅ Exercise 4: Delete from Hash Table
Add a function to delete a key-value pair from the hash table. Handle probing correctly.

### ✅ Exercise 5: Print Hash Table
Create a function that prints all key-value pairs stored in the hash table.

### ✅ Exercise 6: Chaining with Linked Lists
Implement collision resolution using chaining. Store multiple items at each index using linked lists.

### ✅ Exercise 7: Hash Function Comparison
Write two different hash functions and compare their distribution of keys across the table.

### ✅ Exercise 8: Dynamic Resizing
Simulate dynamic resizing of the hash table when load factor exceeds a threshold.

### ✅ Exercise 9: String Keys
Modify the hash table to accept string keys. Use a string hash function to compute indices.

### ✅ Exercise 10: Frequency Counter
Use a hash table to count the frequency of integers in an array.
