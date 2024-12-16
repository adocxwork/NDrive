#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int maxValue = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    int frequency[maxValue + 1] = {0};
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }
    int maxElement = arr[0];
    int maxCount = frequency[arr[0]];

    for (int i = 1; i < n; ++i) {
        if (frequency[arr[i]] > maxCount) {
            maxCount = frequency[arr[i]];
            maxElement = arr[i];
        }
    }
    cout << "The element which appears the maximum number of times is: " << maxElement << endl;

    return 0;
}
