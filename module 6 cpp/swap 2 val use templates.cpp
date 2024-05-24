#include <iostream>

using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 50, num2 = 10;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    double x = 5.67, y = 8.65;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}