#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(const vector<int>& arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int x : arr) {
        currentSum += x;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maxSubarraySum(arr) << endl;
    return 0;
}
