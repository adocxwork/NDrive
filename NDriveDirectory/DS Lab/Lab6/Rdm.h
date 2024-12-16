#ifndef RDM_H
#define RDM_H
#include <cstdlib>
#include <ctime>
int* Rdm(int n) {
    int* arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
    }
    return arr;
}
#endif
