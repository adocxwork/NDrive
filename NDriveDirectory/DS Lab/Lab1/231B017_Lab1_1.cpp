#include <iostream>
using namespace std;
int largest(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {2,1,5,7,0,4,3};
    cout << largest(arr, 7) << endl;
    return 0;
}
