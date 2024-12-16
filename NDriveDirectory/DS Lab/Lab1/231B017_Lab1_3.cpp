#include <iostream>
using namespace std;
int isPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int num = 7;
    if(isPrime(num)){
        cout<<"Prime";
    } else{
        cout<<"Not Prime";
    }
    return 0;
}
