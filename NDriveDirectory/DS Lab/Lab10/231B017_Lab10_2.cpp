#include <iostream>
#define MAX 5
using namespace std;
struct CircularQueue {
    int items[MAX];
    int front;
    int rear;
};

void initialize(CircularQueue &q) {
    q.front = -1;
    q.rear = -1;
}
bool isEmpty(CircularQueue &q) {
    return q.front == -1;
}
bool isFull(CircularQueue &q) {
    return (q.rear + 1) % MAX == q.front;
}
void insert(CircularQueue &q, int element) {
    if (isFull(q)) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (isEmpty(q)) {
        q.front = 0;
    }
    q.rear = (q.rear + 1) % MAX;
    q.items[q.rear] = element;
    cout << "Inserted: " << element << endl;
}
void deleteElement(CircularQueue &q) {
    if (isEmpty(q)) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Deleted element is " << q.items[q.front] << endl;
    if (q.front == q.rear) {
        q.front = q.rear = -1;
    } else {
        q.front = (q.front + 1) % MAX;
    }
}
void displayFront(CircularQueue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at the front is " << q.items[q.front] << endl;
    }
}
void displayQueue(CircularQueue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is: ";
        int i = q.front;
        while (true) {
            cout << q.items[i] << " ";
            if (i == q.rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
}
int main() {
    CircularQueue q;
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
