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

    int n,k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) make(i);
    
    while(k--){
        int u, v;
        cin >> u >> v;
        Union(u,v);
    }

    int conn_ct = 0;
    for(int i = 1; i <= n; i++){
        if(find(i) == i){
            conn_ct++;
        }
    }

    return 0;
}