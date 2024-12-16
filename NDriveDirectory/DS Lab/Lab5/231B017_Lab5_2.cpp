#include <iostream>
using namespace std;
int fun(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]) return i;
    }
}
int main(){
    int arr[] = {1,4,7,8,9,5,4};
    cout<<fun(arr, 7);
    return 0;
}
