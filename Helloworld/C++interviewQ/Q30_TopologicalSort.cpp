/*
Question 30: Q30_TopologicalSort
Description: Topological sort using Kahn's algorithm (BFS).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q30_TopologicalSort.cpp -O2 -Wall -o Q30_TopologicalSort
Run: ./Q30_TopologicalSort
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int n, const vector<vector<int>>& g){
    vector<int> indeg(n,0);
    for(int u=0;u<n;u++) for(int v: g[u]) indeg[v]++;
    queue<int> q; for(int i=0;i<n;i++) if(indeg[i]==0) q.push(i);
    vector<int> order;
    while(!q.empty()){
        int u=q.front(); q.pop(); order.push_back(u);
        for(int v: g[u]) if(--indeg[v]==0) q.push(v);
    }
    if((int)order.size()!=n) return {}; // cycle
    return order;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); }
    auto ord = topoSort(n,g);
    if(ord.empty()) cout<<"Cycle detected\n";
    else for(int x: ord) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
