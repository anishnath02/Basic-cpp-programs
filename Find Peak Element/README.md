## **Problem Statement**

You are given an array `arr` of length `n`.  
Your task is to find the **index (0-based)** of a **peak element** in the array.  
If multiple peak elements exist, return the index of **any** of them.

A **peak element** is an element that is greater than both of its neighbors.

Peak condition:
    arr[i - 1] < arr[i] and arr[i + 1] < arr[i]

Assume:
- arr[-1] = -∞
- arr[n] = -∞

---

### **Example**

Input: arr = [1, 8, 1, 5, 3]  
Output: 1 (or 3)

Explanation:  
- 8 at index 1 is a peak  
- 5 at index 3 is a peak  
Any one index can be returned.

---

### 📝 **Detailed Explanation**

**Sample Input 1**
    5
    1 8 1 5 3

**Sample Output 1**
    1

Explanation: Peaks exist at indices 1 and 3. Returning any valid one prints True.

---

**Sample Input 2**
    3
    1 2 1

**Sample Output 2**
    1

---

**Sample Input 3**
    6
    2 4 6 5 3 1

**Sample Output 3**
    2

Explanation: 6 at index 2 is the peak.

---

### ⏱️ **Expected Time Complexity**
    O(log n)

---

### ✅ **Constraints**
    1 <= n <= 1e5
    1 <= arr[i] <= 1e5
    arr[i] != arr[i+1]

---

## **Solution Approach**

### **Method Used — Binary Search**

We use **Binary Search** to find a peak efficiently.

---

### **Intuition**

- If arr[mid] < arr[mid + 1], then a peak lies **on the right side**
- Otherwise, there is a peak **on the left side or at mid**

Why?  
Because if the slope is rising, peak must be further ahead;  
if slope is falling, peak is behind or at mid.

---

### **Steps**

1. low = 0, high = n - 1  
2. While low < high:
     - mid = (low + high) / 2
     - If arr[mid] < arr[mid + 1], low = mid + 1
     - Else high = mid
3. Return low (this will be a peak)

---

### **Why This Works**

- A peak always exists
- Binary search reduces range each time
- Guaranteed to find at least one peak

---

### **Time & Space Complexity**
    Time:  O(log n)
    Space: O(1)

---

### 🎯 **Key Insight**
A peak always exists in such arrays —  
Binary search finds it without needing to check every element.

---
