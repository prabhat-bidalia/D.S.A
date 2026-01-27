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

void inorder(Node *node, vector<int> &res){
    if(node == nullptr){
        return;
    }
    inorder(node->left,res);
    res.push_back(node->data);
    inorder(node->right, res);
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res;
    inorder(root,res);
    for(int node : res) cout << node << " ";
    // Output : 4 2 5 1 6 3 7
  
    return 0;
}
