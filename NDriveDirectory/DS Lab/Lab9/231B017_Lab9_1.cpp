#include <iostream>
using namespace std;
#define MAX 5
struct Stack {
    int arr[MAX];
    int top;
};

void initializeStack(Stack &s) {
    s.top = -1;
}

bool isFull(const Stack &s) {
    return s.top == MAX - 1;
}

bool isEmpty(const Stack &s) {
    return s.top == -1;
}

void push(Stack &s, int element) {
    if (isFull(s)) {
        cout << "Stack is full!" << endl;
    } else {
        s.arr[++s.top] = element;
        cout << "Element " << element << " pushed to stack." << endl;
    }
}

void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty!" << endl;
    } else {
        int poppedElement = s.arr[s.top--];
        cout << "Deleted element is " << poppedElement << endl;
    }
}

void display(const Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is..." << endl;
        for (int i = s.top; i >= 0; --i) {
            cout << s.arr[i] << endl;
        }
    }
}

int main() {
    Stack s;
    initializeStack(s);
    int choice, element;
    do {
        cout << "*** Stack Menu ***" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice(1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                push(s, element);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
