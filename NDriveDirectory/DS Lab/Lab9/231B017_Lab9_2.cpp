#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;
};

void initializeStack(Stack &s) {
    s.top = nullptr;
}

bool isEmpty(const Stack &s) {
    return s.top == nullptr;
}

void push(Stack &s, int element) {
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = s.top;
    s.top = newNode;
    cout << "Element " << element << " pushed to stack." << endl;
}

void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty!" << endl;
    } else {
        Node* temp = s.top;
        s.top = s.top->next;
        cout << "Deleted element is " << temp->data << endl;
        delete temp;
    }
}

void display(const Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack is empty!" << endl;
    } else {
        Node* temp = s.top;
        cout << "Stack is..." << endl;
        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
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
