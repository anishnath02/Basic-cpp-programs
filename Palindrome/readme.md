# Palindrome Checker

A simple C++ program that checks if a number is a palindrome.

## Description

This program determines whether a given integer reads the same forwards and backwards. It includes two main functions:
- `reverse()` - Reverses the digits of a number
- `palindrome()` - Checks if a number equals its reverse

## How it works

1. The `reverse()` function takes an integer and returns its reverse by extracting digits using modulo operations
2. The `palindrome()` function compares the original number with its reversed version
3. Returns `true` if the number is a palindrome, `false` otherwise

## Example

```cpp
palindrome(121) // Returns true (121 reversed is 121)
```

## Usage

Compile and run the program:
```bash
g++ main.cpp -o palindrome
./palindrome
```

The program will output `1` (true) for the test case 121.