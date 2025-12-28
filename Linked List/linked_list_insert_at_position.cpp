#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtPos(Node* head, int pos, int val){
    if (pos < 1) return head;
    if (pos == 1){
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    Node* curr = head;
    for(int i = 1; i < pos - 1 && curr != nullptr; i++) curr = curr->next;
    if (curr == nullptr) return head;
    Node* newNode = new Node(val);
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printList(Node *head){
    if (head == nullptr){
        cout << " -> NULL" <<endl;
        return;
    }
    cout << head->data;
    if (head->next != nullptr) cout << " -> ";
    printList(head->next);
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    printList(head);
    head = insertAtPos(head,3,3);
    printList(head);
    return 0;
}
