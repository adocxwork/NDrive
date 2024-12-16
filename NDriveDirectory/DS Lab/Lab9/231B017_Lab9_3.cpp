#include <iostream>
#include <string>
using namespace std;

struct Stack {
    string arr[100];
    int top;
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(const string& element) {
        if (top < 99) {
            arr[++top] = element;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }
    string pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return "";
        } else {
            return arr[top--];
        }
    }
    string peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return "";
    }
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix) {
    Stack stack;

    for (int i = 0; i < postfix.length(); i++) {
        if (isalnum(postfix[i])) {
            stack.push(string(1, postfix[i]));
        }
        else if (isOperator(postfix[i])) {
            string operand2 = stack.pop();
            string operand1 = stack.pop();
            string infix = "(" + operand1 + postfix[i] + operand2 + ")";
            stack.push(infix);
        }
    }
    return stack.peek();
}
int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;
    string infix = postfixToInfix(postfix);
    cout << "Infix expression: " << infix << endl;
    return 0;
}
