#include <bits/stdc++.h>
using namespace std;

class myStack
{
    vector<int> arr;
public:
    void push(int x)
    {
        arr.push_back(x);
    }
    int pop()
    {
        if (arr.empty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int val = arr.back();
        arr.pop_back();
        return val;
    }
    int peek()
    {
        if (arr.empty()){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return arr.back();
    }
    bool isEmpty() { return arr.empty(); }
    int size() { return (arr.size()); }
};

int main()
{
    myStack st;
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