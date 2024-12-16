#include <iostream>
using namespace std;
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; ++i) {
        result += a;
    }
    return result;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = multiply(num1, num2);
    cout << "The product : " << result << endl;

    return 0;
}
