#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int index) {
    for (int i = size; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    ++size;
}

int main() {
    int capacity = 100;
    int size = 0;
    int arr[capacity];
    cout << "Enter the number of elements currently in the array: ";
    int numElements;
    cin >> numElements;

    size = numElements;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int element, index;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the index at which to insert the new element: ";
    cin >> index;

    insertElement(arr, size, element, index);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
