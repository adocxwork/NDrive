#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
struct PriorityQueue {
    Node* front;
};
void initialize(PriorityQueue &pq) {
    pq.front = nullptr;
}
bool isEmpty(PriorityQueue &pq) {
    return pq.front == nullptr;
}
void insert(PriorityQueue &pq, int element) {
    Node* newNode = new Node();
    newNode->data = element;
    newNode->next = nullptr;
    if (isEmpty(pq) || pq.front->data > element) {
        newNode->next = pq.front;
        pq.front = newNode;
    } else {
        Node* temp = pq.front;
        while (temp->next != nullptr && temp->next->data <= element) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted: " << element << endl;
}
void deleteHighestPriority(PriorityQueue &pq) {
    if (isEmpty(pq)) {
        cout << "Queue Underflow" << endl;
        return;
    }
    Node* temp = pq.front;
    cout << "Deleted element is " << temp->data << endl;
    pq.front = pq.front->next;
    delete temp;
}
void displayQueue(PriorityQueue &pq) {
    if (isEmpty(pq)) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Priority Queue: ";
    Node* temp = pq.front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    PriorityQueue pq;
    initialize(pq);
    int choice, element;

    do {
        cout << "\n1. Insert\n2. Delete highest priority element\n3. Display all elements\n4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                insert(pq, element);
                break;
            case 2:
                deleteHighestPriority(pq);
                break;
            case 3:
                displayQueue(pq);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
