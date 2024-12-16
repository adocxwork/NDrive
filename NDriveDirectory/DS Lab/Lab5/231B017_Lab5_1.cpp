#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fun(int arr[], int n, int target){
    int st=0, end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]>target){
            end = mid-1;
        } else{
            st = mid+1;
        }
    }
    return -1;
}
int main() {

    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<(fun(arr, n, target));
    return 0;
}
