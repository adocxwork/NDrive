#include <iostream>
using namespace std;
void reverse(char arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    char name[20] = "Ad!tya Gupta";
    cout<<name<<endl;
    reverse(name, 12);
    cout<<name;
    return 0;
}
