#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void prettyPrintTree(Node* node, string prefix = "", bool isLeft = true) {
    if (node == nullptr) {
        return;
    }

    if (node->right) {
        prettyPrintTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
    }

    cout << prefix << (isLeft ? "└── " : "┌── ") << node->data << endl;

    if (node->left) {
        prettyPrintTree(node->left, prefix + (isLeft ? "    " : "│   "), true);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    prettyPrintTree(root);
    /*
    Output - 
            ┌── 7
    │   ┌── 3
    │   │   └── 6
    └── 1
        │   ┌── 5
        └── 2
            └── 4
    */
    return 0;
}
