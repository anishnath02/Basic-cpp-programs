# 🧮 Factorial Calculator (C++)

## 📘 Description

This is a simple C++ program that calculates the **factorial** of a given positive integer ( n ).
The factorial of a number is defined as:

$
n! = 1 \times 2 \times 3 \times \ldots \times n
$

For example:
$
5! = 1 \times 2 \times 3 \times 4 \times 5 = 120
$

---

## 🚀 Features

* Takes an integer input from the user.
* Computes factorial using an iterative loop.
* Uses `long long` to handle larger results safely.
* Simple and efficient implementation.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll prod = 1;
    for (int i = 2; i <= n; i++) {
        prod *= i;
    }
    cout << prod << '\n';
}
```

---

## 🧩 Example

**Input:**

```
5
```

**Output:**

```
120
```

---

## ⚙️ How to Run

1. Save the file as `factorial.cpp`.
2. Compile the program:

   ```bash
   g++ factorial.cpp -o factorial
   ```
3. Run the executable:

   ```bash
   ./factorial
   ```
4. Enter a number when prompted.

---

## 🕒 Time Complexity

$
O(n)
$
(because the loop runs from 2 to $n$.

---

## 📦 Space Complexity

$
O(1)
$

