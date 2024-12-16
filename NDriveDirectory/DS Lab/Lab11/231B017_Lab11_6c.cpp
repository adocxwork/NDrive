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
int countInternalNodes(Node* root) {
    if (root == nullptr || (root->lc == nullptr && root->rc == nullptr))
        return 0;
    return 1 + countInternalNodes(root->lc) + countInternalNodes(root->rc);
}

int main() {
    Node* root = newNode(1);
    root->lc = newNode(2);
    root->rc = newNode(3);
    root->lc->lc = newNode(4);
    root->lc->rc = newNode(5);

    cout << "Number of internal nodes in the tree: " << countInternalNodes(root) << endl;
    return 0;
}
