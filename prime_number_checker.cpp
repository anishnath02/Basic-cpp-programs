/*
 * prime_number_checker.cpp
 * A small, well-commented C++ example program that checks whether a given
 * integer is prime. This follows the repository README guidance: clear,
 * minimal input, and sample runs in comments.
 *
 * Compile (with g++):
 *   g++ -std=c++11 -Wall -O2 prime_number_checker.cpp -o prime_number_checker
 * Run:
 *   ./prime_number_checker
 *
 * Example runs:
 *   Input: 29
 *   Output: 29 is a prime number.
 *
 *   Input: 1
 *   Output: 1 is not a prime number.
 */

#include <iostream>
#include <cmath>

// Check if n is prime. Works for n up to 9e18-ish with long long but uses
// trial division up to sqrt(n) which is adequate for small/educational inputs.
// Returns true if n is prime, false otherwise.
bool is_prime(long long n) {
    if (n <= 1) return false;        // 0, 1 and negatives are not prime
    if (n <= 3) return true;         // 2 and 3 are prime
    if (n % 2 == 0) return false;    // even numbers >2 are not prime

    long long limit = static_cast<long long>(std::sqrt((long double)n));
    for (long long d = 3; d <= limit; d += 2) {
        if (n % d == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Prime Number Checker\n";
    std::cout << "Enter an integer: ";

    long long n;
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    if (is_prime(n))
        std::cout << n << " is a prime number." << std::endl;
    else
        std::cout << n << " is not a prime number." << std::endl;

    return 0;
}
