#include <iostream>
#define MAX 5
using namespace std;
struct Queue {
    int items[MAX];
    int front;
    int rear;
};

void initialize(Queue &q) {
    q.front = -1;
    q.rear = -1;
}
bool isEmpty(Queue &q) {
    return q.front == -1;
}
bool isFull(Queue &q) {
    return q.rear == MAX - 1;
}
void insert(Queue &q, int element) {
    if (isFull(q)) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (isEmpty(q)) {
        q.front = 0;
    }
    q.rear++;
    q.items[q.rear] = element;
    cout << "Inserted: " << element << endl;
}
void deleteElement(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Deleted element is " << q.items[q.front] << endl;
    q.front++;
    if (q.front > q.rear) {
        q.front = q.rear = -1;
    }
}
void displayFront(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at the front is " << q.items[q.front] << endl;
    }
}
void displayQueue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is: ";
        for (int i = q.front; i <= q.rear; i++) {
            cout << q.items[i] << " ";
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
