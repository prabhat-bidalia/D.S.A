#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

vector<int> g[N];
bool vis[N];

void dfs(int v){
    vis[v] = true;
    cout << v << ' '; // Process current node

    for(int child : g[v]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1); // Remove for directed graphs;
    }

    dfs(1);

    return 0;
}