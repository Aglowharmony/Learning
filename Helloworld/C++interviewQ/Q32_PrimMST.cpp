/*
Question 32: Q32_PrimMST
Description: Prim's algorithm for Minimum Spanning Tree using priority queue.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q32_PrimMST.cpp -O2 -Wall -o Q32_PrimMST
Run: ./Q32_PrimMST
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll prim(int n, const vector<vector<pair<int,int>>>& g){
    vector<int> used(n,0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    ll total=0;
    while(!pq.empty()){
        auto [w,u]=pq.top(); pq.pop();
        if(used[u]) continue;
        used[u]=1; total += w;
        for(auto [v,wt]: g[u]) if(!used[v]) pq.push({wt,v});
    }
    return total;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<pair<int,int>>> g(n);
    for(int i=0;i<m;i++){ int u,v,w; cin>>u>>v>>w; g[u].push_back({v,w}); g[v].push_back({u,w}); }
    cout<<prim(n,g)<<"\n";
    return 0;
}
