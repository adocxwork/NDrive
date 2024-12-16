#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* lc;
    struct Node* rc;
};

Node* newNode(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->lc = temp->rc = nullptr;
    return temp;
}

bool search(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->lc, key);

    return search(root->rc, key);
}

int main() {
    Node* root = newNode(15);
    root->lc = newNode(10);
    root->rc = newNode(20);
    root->lc->lc = newNode(8);
    root->lc->rc = newNode(12);
    root->rc->lc = newNode(17);
    root->rc->rc = newNode(25);

    int key;
    cout << "Enter the value to search: ";
    cin >> key;

    if (search(root, key))
        cout << "The value " << key << " is present in the BST.\n";
    else
        cout << "The value " << key << " is NOT present in the BST.\n";

    return 0;
}
