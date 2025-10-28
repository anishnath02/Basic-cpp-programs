/* ==============================================================
   File Name   : basic_cpp_program.cpp
   Author      : Agnibesh Maity
   Description : A simple C++ program that demonstrates:
                 1. Printing a greeting message
                 2. Adding two numbers
                 3. Checking even or odd
                 4. Calculating factorial
   Created On  : October 2025
   ============================================================== */

#include <iostream>
using namespace std;

// --------------------------------------------------------------
// Function to calculate factorial
// --------------------------------------------------------------
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// --------------------------------------------------------------
// Main Function
// --------------------------------------------------------------
int main() {
    int choice, a, b, n;

    cout << "=============================================\n";
    cout << "🚀 BASIC C++ PROGRAM - MULTI FUNCTION TOOL 🚀\n";
    cout << "=============================================\n";

    cout << "1️⃣  Print Greeting Message\n";
    cout << "2️⃣  Sum of Two Numbers\n";
    cout << "3️⃣  Check Even or Odd\n";
    cout << "4️⃣  Find Factorial\n";
    cout << "5️⃣  Exit\n";
    cout << "---------------------------------------------\n";

    while (true) {
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nHello, World! 🌎 Welcome to C++ Programming!\n";
                break;

            case 2:
                cout << "\nEnter two numbers: ";
                cin >> a >> b;
                cout << "Sum = " << a + b << endl;
                break;

            case 3:
                cout << "\nEnter a number: ";
                cin >> n;
                if (n % 2 == 0)
                    cout << n << " is Even.\n";
                else
                    cout << n << " is Odd.\n";
                break;

            case 4:
                cout << "\nEnter a number: ";
                cin >> n;
                cout << "Factorial of " << n << " = " << factorial(n) << endl;
                break;

            case 5:
                cout << "\n👋 Exiting... Have a great day!\n";
                return 0;

            default:
                cout << "⚠️ Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
