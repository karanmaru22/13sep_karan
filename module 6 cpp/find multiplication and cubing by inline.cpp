#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication: " << multiply(num1, num2) << endl;

    cout << "Cubic value of " << num1 << ": " << cubic(num1) << endl;
    cout << "Cubic value of " << num2 << ": " << cubic(num2) << endl;

    return 0;
}