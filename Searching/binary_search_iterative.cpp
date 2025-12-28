#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;     
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    cout << binarySearch(nums,5) << endl;
    return 0;
}


