#include <iostream>
using namespace std;

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
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

    if (hasDuplicates(arr, size)) {
        cout << "The array contains duplicate elements." << endl;
    } else {
        cout << "The array does not contain any duplicate elements." << endl;
    }

    delete[] arr;  // Deallocate the memory used for the array

    return 0;
}
