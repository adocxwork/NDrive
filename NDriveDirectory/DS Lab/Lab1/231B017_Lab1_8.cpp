#include <iostream>
using namespace std;
int find(char arr[], char word[], int n, int wn){
    bool flag = true;
    for(int i=0; i<n; i++){
        if(arr[i]==word[0]){
            for(int j=0; j<wn; j++){
                if(word[j]!=arr[j+i]){
                    flag = false;
                    break;
                }
                flag = true;
            }
            if(flag) return i;
        }
    }
    return -1;
}
int main(){
    char name[20] = "Aditya Gupta";
    char word[20] = "Gupta";
    int index = find(name, word, 12, 5);
    if(index!=-1)
        cout<<"Index : "<<index;
    else
        cout<<"Word doesn't exists..";
    return 0;
}
