#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;

    if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    *ptr = 42;

    cout << "Dynamically allocated integer value: " << *ptr << endl;

    delete ptr;

    ptr = nullptr;

    return 0;
}