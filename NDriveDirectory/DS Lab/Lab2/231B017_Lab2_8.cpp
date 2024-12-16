#include <iostream>
using namespace std;

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    if (r > n) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    cout << "Enter the values for n and r: ";
    cin >> n >> r;
    long long result = nCr(n, r);
    cout << "Answer : " << result << endl;

    return 0;
}
