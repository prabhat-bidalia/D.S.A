#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

ll binexp(ll a, ll b)
{
    if(b == 0) return 1;
    ll tmp = binexp(a, b/2);
    ll res = tmp * tmp;
    if(b % 2 == 1) res *= a;
    return res;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << binexp(a,b) << endl;
    return 0;
}
