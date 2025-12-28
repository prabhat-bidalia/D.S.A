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

class myStack
{
    Node* top;
    int count;
public:
    myStack(int cap)
    {
        top = NULL;
        count = 0;
    }
    void push(int x)
    {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        count++;
    }
    int pop()
    {
        if (top == NULL){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int val = temp->data;
        count--;
        delete temp;
        return val;
    }
    int peek()
    {
        if (top == NULL){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty() { return (top == NULL); }
    int size() { return count; }
};

int main()
{
    myStack st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << "Popped: " << st.pop() << "\n";
    cout << "Top element: " << st.peek() << "\n";
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << "\n";
    cout << "Current size: " << st.size() << endl;

    return 0;
}