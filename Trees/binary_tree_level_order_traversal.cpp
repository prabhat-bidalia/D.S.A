#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

vector<vector<int>> levelOrder(Node* root) {
    if (!root) return {};

    queue<Node*> q;
    vector<vector<int>> result;

    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;

        for (int i = 0; i < levelSize; i++) {
            Node* node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(level);
    }

    return result;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> res = levelOrder(root);

    for (const auto& level : res) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << '\n';
    }

    /*
    Output:
    1
    2 3
    4 5 6 7
    */

    return 0;
}
