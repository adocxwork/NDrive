#include <iostream>
using namespace std;
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void sort(int arr[], int n, int order){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(order && (arr[j]>arr[j+1])){
                swap(arr, j, j+1);
            } else if(!order && (arr[j]<arr[j+1])){
                swap(arr, j, j+1);
            }
        }
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {9,1,8,2,7,4,0,5};
    int order = 1;
    cout<<"Do you want to sort in asscending order? (0/1)"<<endl;
    cin>>order;

    display(arr, 8);
    sort(arr, 8, order);
    display(arr, 8);
    return 0;
}
