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

Node* insert(Node* root, int key) {
    if (root == nullptr)
        return newNode(key);

    if (key < root->data)
        root->lc = insert(root->lc, key);
    else if (key > root->data)
        root->rc = insert(root->rc, key);

    return root;
}

void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->lc);
    cout << root->data << " ";
    inorder(root->rc);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 17);
    root = insert(root, 25);

    cout << "Inorder Traversal after insertion: ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter a value to insert: ";
    cin >> key;

    root = insert(root, key);

    cout << "Inorder Traversal after inserting " << key << ": ";
    inorder(root);
    cout << endl;

    return 0;
}
