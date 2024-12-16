#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void generateFibonacci(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
}

int main() {
    int n;

    cout << "Input number of terms: ";
    cin >> n;

    cout << "Fibonacci series:" << endl;
    generateFibonacci(n);

    return 0;
}
