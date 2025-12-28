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

Node* insertAtFront(Node* head, int x){
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
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
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    printList(head);
    head = insertAtFront(head, 1);
    printList(head);

    return 0;
}
