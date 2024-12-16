#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void deleteElement(int arr[], int& size, int index) {
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to delete: ";
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        deleteElement(arr, size, index);
        cout << "Array after deletion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Error: element not found" << endl;
    }

    delete[] arr;

    return 0;
}
