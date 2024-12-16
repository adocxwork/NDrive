#include <iostream>
using namespace std;

const int MAX = 100;

bool isSparse(int matrix[][MAX], int rows, int cols, int& zeroCount) {
    int totalElements = rows * cols;
    zeroCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    return zeroCount > (totalElements / 2);
}

void toTripletForm(int matrix[][MAX], int rows, int cols, int tripletForm[][3], int& nonZeroCount) {
    int k = 1;
    tripletForm[0][0] = rows;
    tripletForm[0][1] = cols;
    tripletForm[0][2] = nonZeroCount;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != 0) {
                tripletForm[k][0] = i;
                tripletForm[k][1] = j;
                tripletForm[k++][2] = matrix[i][j];
            }
        }
    }
}

int main() {
    int matrix[MAX][MAX] = {
        {0, 0, 3, 0},
        {0, 5, 0, 0},
        {0, 0, 0, 0},
        {7, 0, 0, 0}
    };
    int rows = 4, cols = 4;

    int zeroCount;
    if (isSparse(matrix, rows, cols, zeroCount)) {
        cout << "The matrix is sparse." << endl;
        int nonZeroCount = (rows*cols)-zeroCount;

        int tripletForm[nonZeroCount+1][3];
        toTripletForm(matrix, rows, cols, tripletForm, nonZeroCount);

        cout << "Triplet form representation:" << endl;
        cout << "Row\tColumn\tValue" << endl;
        for (int i = 0; i <= nonZeroCount; ++i) {
            cout << tripletForm[i][0] << "\t" << tripletForm[i][1] << "\t" << tripletForm[i][2] << endl;
        }

        int bytesSaved = 4*((rows*cols)-((nonZeroCount+1)*3));
        if (bytesSaved > 0) {
            cout << "Bytes saved: " << bytesSaved << " bytes" << endl;
        } else {
            cout << "Bytes wasted: " << -bytesSaved << " bytes" << endl;
        }
    } else {
        cout << "The matrix is not sparse." << endl;
    }

    return 0;
}
