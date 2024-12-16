#include <iostream>
#include "Rdm.h"
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        print(arr, n);
    }
}
int main(){
    int n = 10;
    int* arr = Rdm(n);

    print(arr, n);
    insertionSort(arr, n);
    print(arr, n);

    delete[] arr;
    return 0;
}
