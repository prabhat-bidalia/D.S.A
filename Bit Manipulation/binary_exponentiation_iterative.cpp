#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

ll binexp(ll a, ll b)
{
    ll ans = 1;
    a %= MOD;
    while(b > 0)
    {
        if(b & 1){
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll a , b;
    cin >> a >> b;
    cout << binexp(a,b) << endl;
    return 0;
}
