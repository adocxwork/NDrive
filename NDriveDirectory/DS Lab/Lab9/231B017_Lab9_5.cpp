#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
struct Stack {
    char arr[100];
    int top;
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(char element) {
        if (top < 99) {
            arr[++top] = element;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }
    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return '\0';
        } else {
            return arr[top--];
        }
    }
    char peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return '\0';
    }
};
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
int precedence(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}
string reverseString(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
string infixToPostfix(string infix) {
    Stack s;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            s.pop();
        }
        else if (isOperator(c)) {
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(c)) {
                postfix += s.pop();
            }
            s.push(c);
        }
    }
    while (!s.isEmpty()) {
        postfix += s.pop();
    }
    return postfix;
}
string infixToPrefix(string infix) {
    string reversedInfix = reverseString(infix);
    for (int i = 0; i < reversedInfix.length(); i++) {
        if (reversedInfix[i] == '(') {
            reversedInfix[i] = ')';
        } else if (reversedInfix[i] == ')') {
            reversedInfix[i] = '(';
        }
    }
    string postfix = infixToPostfix(reversedInfix);
    string prefix = reverseString(postfix);
    return prefix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;
    return 0;
}
