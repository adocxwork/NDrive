#include <iostream>
using namespace std;

void stableSelectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int minValue = arr[minIndex];
            for (int k = minIndex; k > i; --k) {
                arr[k] = arr[k - 1];
            }
            arr[i] = minValue;
        }
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 4, 5, 6, 8, 9, 10, 13, 15, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    stableSelectionSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
