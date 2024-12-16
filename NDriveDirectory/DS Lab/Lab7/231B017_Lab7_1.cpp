#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void Insert_Beginning(Node*& head, int newValue) {
    Node* newNode = new Node(newValue);
    newNode->next = head;
    head = newNode;
}

void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr;
    int N;
    cout << "Enter the number of nodes to insert: ";
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int value;
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        Insert_Beginning(head, value);
    }

    cout << "Linked List: ";
    display(head);
    return 0;
}
