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

Node* deleteNodeEnd(Node* head, int position){
    Node* temp = head;
    if (position == 1){
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = nullptr;
    for (int i = 1; i < position; i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
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
    head = deleteNodeEnd(head,3);
    printList(head);
    return 0;
}
