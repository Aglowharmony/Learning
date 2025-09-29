/*
Question 29: Q29_BFSShortestPathUnweighted
Description: BFS to find shortest path in unweighted graph.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q29_BFSShortestPathUnweighted.cpp -O2 -Wall -o Q29_BFSShortestPathUnweighted
Run: ./Q29_BFSShortestPathUnweighted
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> bfsShortest(int s, const vector<vector<int>>& g){
    int n = g.size();
    vector<int> dist(n, -1), par(n, -1);
    queue<int> q; q.push(s); dist[s]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: g[u]) if(dist[v]==-1){ dist[v]=dist[u]+1; par[v]=u; q.push(v); }
    }
    return dist;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); g[v].push_back(u); }
    int s; cin>>s;
    auto dist = bfsShortest(s,g);
    for(int i=0;i<n;i++) cout<<i<<": "<<dist[i]<<"\n";
    return 0;
}
