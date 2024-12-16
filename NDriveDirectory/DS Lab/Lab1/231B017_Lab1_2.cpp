#include <iostream>
using namespace std;
int indexSearch(int arr[], int ele, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            return i;
        }
    }
}
int main(){
    int arr[] = {2,1,5,7,0,4,3};
    cout << "Index : " << indexSearch(arr, 0, 7) << endl;
    return 0;
}
