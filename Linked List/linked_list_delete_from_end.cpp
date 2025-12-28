#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* deleteNodeEnd(Node* head){
    if (head == nullptr) return nullptr;
    if (head->next == nullptr){
        delete head;
        return nullptr;
    }
    Node* secondLast = head;
    while (secondLast->next->next != nullptr) secondLast = secondLast->next;
    delete secondLast->next;
    secondLast->next = nullptr;
    return head;
}

void printList(Node* head){
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
    Node* head = new Node(8);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(7);
    printList(head);
    head = deleteNodeEnd(head);
    printList(head);
    return 0;
}
