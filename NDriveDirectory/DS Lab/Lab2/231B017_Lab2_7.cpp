#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nLower Triangular Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j <= i) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
