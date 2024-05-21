#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *arr;

public:
    Matrix(int s) {
        size = s;
        arr = new int[size];
    }

    ~Matrix() {
        delete[] arr;
    }

    Matrix operator+(Matrix &m) {
        Matrix temp(size);
        for (int i = 0; i < size; ++i) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    void inputMatrix() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void displayMatrix() {
        cout << "Resultant Matrix: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "For Matrix 1:" << endl;
    matrix1.inputMatrix();
    cout << "For Matrix 2:" << endl;
    matrix2.inputMatrix();

    Matrix result = matrix1 + matrix2;

    result.displayMatrix();

    return 0;
}