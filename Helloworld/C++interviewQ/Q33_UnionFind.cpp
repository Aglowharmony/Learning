/*
Question 33: Q33_UnionFind
Description: Disjoint Set Union with path compression and union by rank.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q33_UnionFind.cpp -O2 -Wall -o Q33_UnionFind
Run: ./Q33_UnionFind
*/

#include <bits/stdc++.h>
using namespace std;
struct DSU {
    vector<int> p, r;
    DSU(int n): p(n), r(n,0){ iota(p.begin(), p.end(), 0); }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    bool unite(int a, int b){
        a = find(a); b = find(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q; if(!(cin>>n>>q)) return 0;
    DSU dsu(n);
    while(q--){
        char type; cin>>type;
        if(type=='u'){ int a,b; cin>>a>>b; dsu.unite(a,b); }
        else if(type=='f'){ int x; cin>>x; cout<<dsu.find(x)<<"\n"; }
    }
    return 0;
}
