#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void traverseListIter(Node* head){
    while (head != nullptr){
        cout << head->data;
        if (head->next != nullptr) cout << " -> ";
        else cout << " -> NULL";
        head = head->next;
    }
    cout<<endl;
}

void traverseListRec(Node* head){
    if (head == nullptr){
        cout << " -> NULL" <<endl;
        return;
    }
    cout << head->data;
    if (head->next != nullptr) cout << " -> ";
    traverseListRec(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    traverseListIter(head);
    traverseListRec(head);

    return 0;
}
