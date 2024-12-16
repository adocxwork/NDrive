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
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
        print(arr, n);
    }
}
int main(){
    int n = 10;
    int* arr = Rdm(n);

    print(arr, n);
    bubbleSort(arr, n);
    print(arr, n);

    delete[] arr;
    return 0;
}
