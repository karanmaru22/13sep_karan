#include <iostream>

using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number& num1, Number& num2);

    void display() {
        cout << "Number: " << num << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main() {
    Number num1(5);
    Number num2(10);

    cout << "Before swapping:\n";
    num1.display();
    num2.display();

    swapNumbers(num1, num2);

    cout << "After swapping:\n";
    num1.display();
    num2.display();

    return 0;
}