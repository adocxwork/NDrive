#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* lc;
    Node* rc;
};
Node* newNode(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->lc = temp->rc = nullptr;
    return temp;
}

Node* mirror(Node* root) {
    if (root == nullptr)
        return nullptr;
    Node* temp = root->lc;
    root->lc = mirror(root->rc);
    root->rc = mirror(temp);

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
    Node* root = newNode(1);
    root->lc = newNode(2);
    root->rc = newNode(3);
    root->lc->lc = newNode(4);
    root->lc->rc = newNode(5);

    cout << "Inorder traversal of original tree: ";
    inorder(root);
    cout << endl;

    root = mirror(root);

    cout << "Inorder traversal of mirror image: ";
    inorder(root);
    cout << endl;

    return 0;
}
