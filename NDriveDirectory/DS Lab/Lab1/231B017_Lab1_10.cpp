#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    int searchElement;
    cout << "Enter the element to search for: ";
    cin >> searchElement;
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (array[i] == searchElement) {
            cout << "Element " << searchElement << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }
    delete[] array;

    return 0;
}
