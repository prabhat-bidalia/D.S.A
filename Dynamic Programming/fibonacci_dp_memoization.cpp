#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000,-1);

int fib_memo(int n)
{
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib_memo(n-1) + fib_memo(n-2);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<"Fibonacci sequence till "<<n<<" digits : ";
    for(int i = 1; i <= n; i++){
        cout<<fib_memo(i-1)<<" ";
    }
    cout<<endl;
    return 0;
}
