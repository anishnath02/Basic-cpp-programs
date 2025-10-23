## Armstrong Number Checker

**File:** armstrongnumber.cpp

### About

An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits in the number.

### For example:

``` 153 is a 3-digit number and
1^3 + 5^3 + 3^3 = 153 → Armstrong.

9474 is a 4-digit number and
9^4 + 4^4 + 7^4 + 4^4 = 9474 → Armstrong.
```
### Features

- Works for any positive integer (not just 3-digit numbers).

- Computes the number of digits, raises each digit to that power, and checks equality.

- Uses an integer power function to avoid floating-point rounding errors from pow().

### How to Run

Save the file as armstrongnumber.cpp.

Compile and run:
```
g++ armstrongnumber.cpp -o armstrongnumber
./armstrongnumber

```
Enter a positive integer when prompted.
- Example Output
```
Enter a number: 153
153 is an Armstrong number.

Enter a number: 9474
9474 is an Armstrong number.

Enter a number: 123
123 is not an Armstrong number.
```
### Notes & Possible Enhancements

* This implementation uses an integer power function to avoid floating point inaccuracies from pow() in <cmath>.

* For very large numbers, long long may overflow; if you need to handle huge integers, consider using big-integer libraries (e.g., Boost.Multiprecision).

* You can add a mode to list all Armstrong numbers in a range — that’s a nice extra challenge for the repo.