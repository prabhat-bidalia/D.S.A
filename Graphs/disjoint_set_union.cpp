#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int parent[N];
int sze[N];

void make(int v){
    parent[v] = v;
    sze[v] = 1;
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]); // path compression
}
 
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b) {
        // Union by size
        if(sze[a] < sze[b]) swap(a,b);
        sze[a] += sze[b];
        parent[b] = a;
    }
}

int main(){

    return 0;
}