#include <iostream>
using namespace std;

void insertionSort(char arr[], int n, int &shifts) {
    for (int i = 1; i < n; ++i) {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
            ++shifts;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    cout << "Enter the characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int shifts = 0;
    insertionSort(arr, n, shifts);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << "Number of shifts: " << shifts << endl;
    return 0;
}
