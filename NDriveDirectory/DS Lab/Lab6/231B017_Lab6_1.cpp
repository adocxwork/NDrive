#include <iostream>
#include "Rdm.h"
using namespace std;

int main() {
    int n = 10;
    int* randomArray = Rdm(n);
    cout << "Random Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << randomArray[i] << " ";
    }
    cout << endl;
    delete[] randomArray;
    return 0;
}
