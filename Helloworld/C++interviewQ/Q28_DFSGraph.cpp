/*
Question 28: Q28_DFSGraph
Description: Depth-first search on graph and detect cycles (directed/undirected).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q28_DFSGraph.cpp -O2 -Wall -o Q28_DFSGraph
Run: ./Q28_DFSGraph
*/

#include <bits/stdc++.h>
using namespace std;
void dfs(int u, vector<vector<int>>& g, vector<int>& vis){
    vis[u]=1;
    cout<<u<<" ";
    for(int v: g[u]) if(!vis[v]) dfs(v,g,vis);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); /* for undirected also add g[v].push_back(u); */ }
    vector<int> vis(n,0);
    for(int i=0;i<n;i++) if(!vis[i]) { dfs(i,g,vis); cout<<"\n"; }
    return 0;
}
