#include <iostream>

template<typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int intArray[] = {5, 2, 9, 1, 6};
    double doubleArray[] = {3.5, 1.2, 2.9, 10.5, 0.4};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);

    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
