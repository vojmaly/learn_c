# 🔍 Sorting and Searching Algorithms in C

Sorting and searching are fundamental operations in computer science, used to organize and retrieve data efficiently. C provides the flexibility to implement various algorithms manually, allowing deep control over performance and behavior.

---

## 🔢 Sorting Algorithms

Sorting algorithms arrange elements in a specific order (ascending or descending). They vary in complexity, stability, and efficiency.

### 🔹 Bubble Sort

Repeatedly swaps adjacent elements if they are in the wrong order.

```c
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
```

- Time Complexity: O(n²)
- Stable: Yes

---

### 🔹 Selection Sort

Finds the minimum element and places it at the beginning.

```c
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(&arr[i], &arr[minIdx]);
    }
}
```

- Time Complexity: O(n²)
- Stable: No

---

### 🔹 Insertion Sort

Builds the sorted array one item at a time.

```c
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
            arr[j + 1] = arr[j--];
        arr[j + 1] = key;
    }
}
```

- Time Complexity: O(n²)
- Stable: Yes

---

### 🔹 Merge Sort

Divide-and-conquer algorithm that splits the array and merges sorted halves.

```c
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
```

- Time Complexity: O(n log n)
- Stable: Yes

---

### 🔹 Quick Sort

Divide-and-conquer algorithm that partitions the array around a pivot.

```c
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

- Time Complexity: O(n log n) average, O(n²) worst
- Stable: No

---

## 🔍 Searching Algorithms

Searching algorithms find the location of a target value in a dataset.

### 🔹 Linear Search

Checks each element sequentially.

```c
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
```

- Time Complexity: O(n)

---

### 🔹 Binary Search

Efficient search on sorted arrays by repeatedly dividing the search interval.

```c
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
```

- Time Complexity: O(log n)
- Requires sorted array

---

## 🧠 Comparison Table

| Algorithm       | Time Complexity | Stable | Best Use Case                     |
|----------------|------------------|--------|-----------------------------------|
| Bubble Sort     | O(n²)            | Yes    | Small datasets, educational use   |
| Selection Sort  | O(n²)            | No     | Simple implementation             |
| Insertion Sort  | O(n²)            | Yes    | Nearly sorted data                |
| Merge Sort      | O(n log n)       | Yes    | Large datasets, stable sorting    |
| Quick Sort      | O(n log n)       | No     | Fast in practice, general purpose |
| Linear Search   | O(n)             | —      | Unsorted data                     |
| Binary Search   | O(log n)         | —      | Sorted data                       |

---

## 🧑‍💻 Training Exercises

### ✅ Exercise 1: Implement Bubble Sort
Write a function that sorts an array using bubble sort. Test it with sample data.

### ✅ Exercise 2: Selection Sort on Strings
Create a program that sorts an array of strings using selection sort.

### ✅ Exercise 3: Insertion Sort with User Input
Read integers from the user and sort them using insertion sort. Print the sorted array.

### ✅ Exercise 4: Merge Sort Recursion
Implement merge sort recursively. Use it to sort an array of 10 integers.

### ✅ Exercise 5: Quick Sort Partitioning
Write a function that partitions an array for quick sort. Print the pivot index and subarrays.

### ✅ Exercise 6: Linear Search in Array
Create a program that searches for a value in an array using linear search. Print its index.

### ✅ Exercise 7: Binary Search on Sorted Array
Sort an array and implement binary search to find a target value. Print the result.

### ✅ Exercise 8: Compare Sorting Times
Measure and compare the execution time of bubble sort and quick sort on large arrays.

### ✅ Exercise 9: Search in 2D Array
Write a function that searches for a value in a 2D array using linear search.

### ✅ Exercise 10: Sort and Search Combined
Create a program that sorts an array and then allows the user to search for values using binary search.
