/*
Question 27: Q27_TreeLowestCommonAncestor
Description: Lowest Common Ancestor in binary tree.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q27_TreeLowestCommonAncestor.cpp -O2 -Wall -o Q27_TreeLowestCommonAncestor
Run: ./Q27_TreeLowestCommonAncestor
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
Node* lca(Node* root, int p, int q){
    if(!root) return nullptr;
    if(root->val==p || root->val==q) return root;
    Node* left = lca(root->left,p,q);
    Node* right = lca(root->right,p,q);
    if(left && right) return root;
    return left?left:right;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> vals(n); for(int i=0;i<n;i++) cin>>vals[i];
    vector<Node*> nodes(n,nullptr);
    for(int i=0;i<n;i++) if(vals[i]!=-1) nodes[i]=new Node(vals[i]);
    for(int i=0;i<n;i++) if(nodes[i]){
        int l=2*i+1,r=2*i+2;
        if(l<n) nodes[i]->left=nodes[l];
        if(r<n) nodes[i]->right=nodes[r];
    }
    int p,q; cin>>p>>q;
    Node* res = lca(nodes[0], p, q);
    if(res) cout<<res->val<<"\n"; else cout<<"No LCA\n";
    return 0;
}
