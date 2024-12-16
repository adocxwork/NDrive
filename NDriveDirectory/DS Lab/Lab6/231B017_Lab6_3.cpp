#include <iostream>
#include "Rdm.h"
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        print(arr, n);
        if (minIndex != i) {
            swap(arr, i, minIndex);
        }
    }
}
int main(){
    int n = 10;
    int* arr = Rdm(n);

    print(arr, n);
    selectionSort(arr, n);
    print(arr, n);

    delete[] arr;
    return 0;
}
