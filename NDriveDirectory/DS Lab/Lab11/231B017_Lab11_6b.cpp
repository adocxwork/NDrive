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
int countNodes(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + countNodes(root->lc) + countNodes(root->rc);
}

int main() {
    Node* root = newNode(1);
    root->lc = newNode(2);
    root->rc = newNode(3);
    root->lc->lc = newNode(4);
    root->lc->rc = newNode(5);

    cout << "Number of nodes in the tree: " << countNodes(root) << endl;
    return 0;
}
