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

Node* findMin(Node* root) {
    while (root && root->lc)
        root = root->lc;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->lc = deleteNode(root->lc, key);
    else if (key > root->data)
        root->rc = deleteNode(root->rc, key);
    else {
        if (root->lc == nullptr) {
            Node* temp = root->rc;
            delete root;
            return temp;
        } else if (root->rc == nullptr) {
            Node* temp = root->lc;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->rc);
        root->data = temp->data;
        root->rc = deleteNode(root->rc, temp->data);
    }

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

    root = newNode(15);
    root->lc = newNode(10);
    root->rc = newNode(20);
    root->lc->lc = newNode(8);
    root->lc->rc = newNode(12);
    root->rc->lc = newNode(17);
    root->rc->rc = newNode(25);

    cout << "Inorder Traversal before deletion: ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter a value to delete: ";
    cin >> key;

    root = deleteNode(root, key);

    cout << "Inorder Traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
