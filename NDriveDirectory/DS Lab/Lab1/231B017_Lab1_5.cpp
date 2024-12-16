#include <iostream>
using namespace std;
void replace(char arr[], int n, char x, char y){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            arr[i] = y;
            return;
        }
    }
}
int main(){
    char name[20] = "Ad!tya Gupta";
    cout<<name<<endl;
    replace(name, 12, '!', 'i');
    cout<<name;
    return 0;
}
