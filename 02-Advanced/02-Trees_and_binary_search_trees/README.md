# 🌳 Trees and Binary Search Trees in C

Trees are hierarchical data structures consisting of nodes connected by edges. They are widely used in organizing data, searching, sorting, and representing hierarchical relationships. A **Binary Search Tree (BST)** is a special type of tree that maintains order among its elements, enabling efficient search operations.

---

## 🌲 Tree Terminology

- **Node**: Basic unit containing data
- **Root**: Topmost node
- **Child**: Node directly connected below another node
- **Parent**: Node directly above a child
- **Leaf**: Node with no children
- **Subtree**: Tree formed by a node and its descendants
- **Height**: Longest path from root to a leaf

---

## 🔹 Binary Tree

A binary tree is a tree where each node has at most two children: left and right.

### 🔸 Structure Definition

```c
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
```

---

## 🔹 Binary Search Tree (BST)

A BST is a binary tree with the following property:

- Left subtree contains values less than the node
- Right subtree contains values greater than the node

This property allows fast search, insertion, and deletion.

---

## 🔸 BST Insertion

```c
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}
```

---

## 🔸 BST Traversals

Traversal means visiting all nodes in a specific order.

### 🔹 Inorder (Left, Root, Right)

```c
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
```

### 🔹 Preorder (Root, Left, Right)

```c
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
```

### 🔹 Postorder (Left, Right, Root)

```c
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
```

---

## 🔸 BST Search

```c
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
```

---

## 🔸 BST Deletion

Deleting a node involves three cases:

- Node has no children (leaf)
- Node has one child
- Node has two children (replace with inorder successor)

---

## 🔄 Balanced Trees

Balanced trees maintain minimal height for efficient operations. Examples include:

- AVL Trees
- Red-Black Trees

These require rotation operations to maintain balance after insertions and deletions.

---

## 🔁 Other Tree Types

- **Full Binary Tree**: Every node has 0 or 2 children
- **Complete Binary Tree**: All levels filled except possibly the last
- **Perfect Binary Tree**: All internal nodes have two children and all leaves are at the same level
- **Binary Heap**: Used in priority queues
- **Trie**: Used for string retrieval
- **B-Trees**: Used in databases and file systems

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Create a BST
Define a structure for a BST node and write a function to insert values. Build a tree with sample data.

### ✅ Exercise 2: Inorder Traversal
Implement an inorder traversal function and use it to print the BST in sorted order.

### ✅ Exercise 3: Search in BST
Write a function that searches for a value in a BST and returns whether it exists.

### ✅ Exercise 4: Delete Node from BST
Implement a function to delete a node from a BST. Handle all three deletion cases.

### ✅ Exercise 5: Count Nodes
Write a function that counts the total number of nodes in a BST.

### ✅ Exercise 6: Find Min and Max
Create functions to find the minimum and maximum values in a BST.

### ✅ Exercise 7: Height of Tree
Write a recursive function that calculates the height of a binary tree.

### ✅ Exercise 8: Mirror Tree
Implement a function that creates a mirror image of a binary tree.

### ✅ Exercise 9: Level Order Traversal
Use a queue to perform level-order traversal (breadth-first) of a binary tree.

### ✅ Exercise 10: Balanced Tree Check
Write a function that checks if a binary tree is height-balanced.

