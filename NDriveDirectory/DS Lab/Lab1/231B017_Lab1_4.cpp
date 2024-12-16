#include <iostream>
using namespace std;
int power(int x, int y){
    int mul = x;
    for(int i=0; i<y-1; i++)
        x = x*mul;
    return x;
}
int main(){
    cout<<power(2,4);
    return 0;
}
