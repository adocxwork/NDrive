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

int height(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + max(height(root->lc), height(root->rc));
}

int main() {
    Node* root = newNode(1);
    root->lc = newNode(2);
    root->rc = newNode(3);
    root->lc->lc = newNode(4);
    root->lc->rc = newNode(5);

    cout << "Height of the tree: " << height(root) << endl;
    return 0;
}
