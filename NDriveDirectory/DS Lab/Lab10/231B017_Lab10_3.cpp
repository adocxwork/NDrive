#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
struct Queue {
    Node* front;
    Node* rear;
};
void initialize(Queue &q) {
    q.front = nullptr;
    q.rear = nullptr;
}
bool isEmpty(Queue &q) {
    return q.front == nullptr;
}
void insert(Queue &q, int element) {
    Node* newNode = new Node();
    newNode->data = element;
    newNode->next = nullptr;

    if (isEmpty(q)) {
        q.front = newNode;
    } else {
        q.rear->next = newNode;
    }
    q.rear = newNode;
    cout << "Inserted: " << element << endl;
}
void deleteElement(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue Underflow" << endl;
        return;
    }
    Node* temp = q.front;
    cout << "Deleted element is " << temp->data << endl;
    q.front = q.front->next;
    if (q.front == nullptr) {
        q.rear = nullptr;
    }
    delete temp;
}
void displayFront(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at the front is " << q.front->data << endl;
    }
}
void displayQueue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is: ";
        Node* current = q.front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}
int main() {
    Queue q;
    initialize(q);
    int choice, element;
    do {
        cout << "1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Input the element for adding in queue: ";
                cin >> element;
                insert(q, element);
                break;
            case 2:
                deleteElement(q);
                break;
            case 3:
                displayFront(q);
                break;
            case 4:
                displayQueue(q);
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
