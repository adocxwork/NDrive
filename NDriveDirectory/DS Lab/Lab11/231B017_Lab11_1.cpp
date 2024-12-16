#include <iostream>
#include <climits>
using namespace std;

struct Node {
    struct Node* lc;
    int data;
    struct Node* rc;
};

Node* newNode(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->lc = temp->rc = nullptr;
    return temp;
}

bool isBSTUtil(Node* node, int min, int max) {
    if (node == nullptr)
        return true;

    if (node->data <= min || node->data >= max)
        return false;

    return isBSTUtil(node->lc, min, node->data) && isBSTUtil(node->rc, node->data, max);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = newNode(10);
    root->lc = newNode(5);
    root->rc = newNode(15);
    root->lc->lc = newNode(2);
    root->lc->rc = newNode(7);

    if (isBST(root))
        cout << "The tree is a Binary Search Tree.\n";
    else
        cout << "The tree is NOT a Binary Search Tree.\n";

    return 0;
}
