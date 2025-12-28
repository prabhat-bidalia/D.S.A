#include <bits/stdc++.h>
using namespace std;

void generate(int index, vector<int> &arr, vector<int> &susbet)
{
    if(index == arr.size()){
        cout<<"{ ";
        for(int val : susbet){
            cout<<val<<" ";
        }
        cout<<"}\n";
        return;
    }
    susbet.push_back(arr[index]);
    generate(index + 1, arr, susbet);
    susbet.pop_back();
    generate(index + 1, arr, susbet);
}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> subsets;
    generate(0,arr,subsets);
    return 0;
}
