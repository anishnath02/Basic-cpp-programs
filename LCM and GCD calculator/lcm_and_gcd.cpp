#include <iostream>
using namespace std;
//calculating gcd using recursion
int gcd(int a, int b) {
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

//Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "🧮 LCM & GCD Calculator 🧮\n";

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
