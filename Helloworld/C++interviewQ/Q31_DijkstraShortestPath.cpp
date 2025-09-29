/*
Question 31: Q31_DijkstraShortestPath
Description: Dijkstra using priority queue for weighted graphs (non-negative weights).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q31_DijkstraShortestPath.cpp -O2 -Wall -o Q31_DijkstraShortestPath
Run: ./Q31_DijkstraShortestPath
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> dijkstra(int s, const vector<vector<pair<int,int>>>& g){
    int n = g.size();
    const ll INF = LLONG_MAX/4;
    vector<ll> dist(n, INF);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    dist[s]=0; pq.push({0,s});
    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if(d!=dist[u]) continue;
        for(auto [v,w]: g[u]){
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<pair<int,int>>> g(n);
    for(int i=0;i<m;i++){ int u,v,w; cin>>u>>v>>w; g[u].push_back({v,w}); g[v].push_back({u,w}); }
    int s; cin>>s;
    auto dist = dijkstra(s,g);
    for(int i=0;i<n;i++) cout<<i<<": "<<(dist[i]==LLONG_MAX/4? -1: dist[i])<<"\n";
    return 0;
}
