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

void postorder(Node *node, vector<int> &res){
    if(node == nullptr){
        return;
    }
    postorder(node->left,res);
    postorder(node->right, res);
    res.push_back(node->data);

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
    postorder(root,res);
    for(int node : res) cout << node << " ";
    // Output : 4 5 2 6 7 3 1
  
    return 0;
}
