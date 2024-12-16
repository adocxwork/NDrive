#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

bool searchElement(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;
    int choice, value, searchValue;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    cout << "Enter the value to search: ";
    cin >> searchValue;

    if (searchElement(head, searchValue)) {
        cout << "Element " << searchValue << " found in the list.\n";
    } else {
        cout << "Element " << searchValue << " not found in the list.\n";
    }

    return 0;
}
