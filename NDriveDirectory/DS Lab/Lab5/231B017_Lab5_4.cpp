#include <iostream>
using namespace std;
int maxIdx(int arr[], int n){
    int m = arr[0], idx = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>m){
            m = arr[i];
            idx = i;
        }
    }
    return idx;
}
int findMaxEle(int arr[], int n){
    int f[1000] = {0};
    for(int i=0; i<n; i++){
        f[arr[i]]++;
    }
    return maxIdx(f, 1000);
}

int main() {
    int arr[] = {2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2};
    int n = 11;

    int maxFE = findMaxEle(arr, n);
    cout << "Element with maximum frequency: " << maxFE << endl;

    return 0;
}
