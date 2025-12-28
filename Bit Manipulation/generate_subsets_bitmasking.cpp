#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int> &arr)
{
    int n = arr.size();
    int total = 1 << n;
    for(int mask = 0; mask < total; mask++){
        vector<int> subset;
        for(int j = 0; j < n; j++){
            if(mask & (1 << j)){
                subset.push_back(arr[j]);
            }
        }
        cout<<"{ ";
        for(int val : subset){
            cout<<val<<" ";
        }
        cout<<"}"<<endl;
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    generateSubsets(arr);
    return 0;
}
