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

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void deleteFromBeginning(Node** head) {
    if (*head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
    cout << "Node deleted from the beginning.\n";
}

void deleteFromPosition(Node** head, int position) {
    if (*head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = *head;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range.\n";
        return;
    }

    Node* nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
    cout << "Node deleted from position " << position << ".\n";
}

void deleteFromEnd(Node** head) {
    if (*head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    if ((*head)->next == nullptr) {
        delete *head;
        *head = nullptr;
        cout << "Node deleted from the end.\n";
        return;
    }

    Node* temp = *head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    cout << "Node deleted from the end.\n";
}

int main() {
    Node* head = nullptr;
    int choice, value, position;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at end\n";
        cout << "2. Display list\n";
        cout << "3. Delete from beginning\n";
        cout << "4. Delete from position\n";
        cout << "5. Delete from end\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertEnd(&head, value);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                deleteFromBeginning(&head);
                break;

            case 4:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteFromPosition(&head, position);
                break;

            case 5:
                deleteFromEnd(&head);
                break;

            case 6:
                exit(0);

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}
