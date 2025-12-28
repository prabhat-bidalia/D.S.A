#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}
int main()
{
    int n = 16;
    cout<<isPowerOf2(n);
    return 0;
}
