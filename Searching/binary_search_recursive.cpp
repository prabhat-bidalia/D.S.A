#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int key)
{
    if(l > r) return -1;
    int mid = l + (r - l) / 2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] < key) return binarySearch(arr,mid + 1, r, key);
    else return binarySearch(arr, l, mid - 1, key);     

}

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    cout<<binarySearch(nums, 0, n - 1, 2)<<endl;
    return 0;
}

