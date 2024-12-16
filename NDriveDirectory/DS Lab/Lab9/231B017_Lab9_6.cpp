#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;
struct Stack {
    int arr[100];
    int top;
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int element) {
        if (top < 99) {
            arr[++top] = element;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }
    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return -1;
    }
};

int evaluatePostfix(string postfix) {
    Stack stack;

    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if (isdigit(c)) {
            stack.push(c - '0');
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            switch (c) {
                case '+': stack.push(operand1 + operand2); break;
                case '-': stack.push(operand1 - operand2); break;
                case '*': stack.push(operand1 * operand2); break;
                case '/': stack.push(operand1 / operand2); break;
            }
        }
    }
    return stack.peek();
}

int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;
    int result = evaluatePostfix(postfix);
    cout << "The result of the postfix expression is: " << result << endl;
    return 0;
}