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

void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->lc);
    cout << root->data << " ";
    inorder(root->rc);
}

void preorder(Node* root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->lc);
    preorder(root->rc);
}

void postorder(Node* root) {
    if (root == nullptr)
        return;
    postorder(root->lc);
    postorder(root->rc);
    cout << root->data << " ";
}

int main() {
    Node* root = newNode(1);
    root->lc = newNode(2);
    root->rc = newNode(3);
    root->lc->lc = newNode(4);
    root->lc->rc = newNode(5);
    root->rc->lc = newNode(6);
    root->rc->rc = newNode(7);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
