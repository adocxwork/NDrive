#include <iostream>
using namespace std;

void insertInSortedArray(int arr[], int& size, int element, int capacity) {
    int i;
    for (i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    size++;
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int capacity = 100;
    int arr[capacity];
    int size = 0;

    cout << "Enter numbers to insert into the sorted list (type '-1' to exit):" << endl;

    while (true) {
        cout << "Enter a number: ";
        int num;
        cin >> num;
        if (num == -1) {
            break;
        }
        insertInSortedArray(arr, size, num, capacity);
        cout << "Sorted array: ";
        printArray(arr, size);
    }
    return 0;
}
