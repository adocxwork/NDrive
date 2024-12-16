#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int capacity) {
    int i;
    for (i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    size++;
}

int main() {
    int arr[10] = {2, 4, 5, 6, 8, 9, 10, 13, 15};
    int size = 9;
    int capacity = 10;
    int element = 7;
    insertElement(arr, size, element, capacity);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
