#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82};
    bubbleSort(arr);
    for(int &x : arr) cout<<x<<" ";
    return 0;

}
