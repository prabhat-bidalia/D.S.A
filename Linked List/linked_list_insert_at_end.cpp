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

Node* insertAtEnd(Node* head, int x){
    Node* newNode = new Node(x);
    if (head == nullptr) return newNode;
    Node* last = head;
    while (last->next != nullptr) last = last->next;
    last->next = newNode; 
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
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    printList(head);
    head = insertAtEnd(head, 5);
    printList(head);

    return 0;
}
