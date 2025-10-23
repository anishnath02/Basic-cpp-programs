#include <iostream>
#include <cmath>
using namespace std;


int order(int x) {
    int len = 0;
    while (x) {
        len++;
        x = x / 10;
    }
    return len;
}


bool isArmstrong(int num) {
    int len = order(num);
    int sum = 0, temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, len);
        temp = temp/10;
    }

    return num == sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}
