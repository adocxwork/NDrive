#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = sumOfSquares(n);
    cout << "The sum : " << result << endl;

    return 0;
}
