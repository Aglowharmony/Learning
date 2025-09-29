/*
Question 24: Q24_BinaryTreeMaxDepth
Description: Compute max depth of binary tree (DFS).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q24_BinaryTreeMaxDepth.cpp -O2 -Wall -o Q24_BinaryTreeMaxDepth
Run: ./Q24_BinaryTreeMaxDepth
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
int maxDepth(Node* root){
    if(!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
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
    cout<<maxDepth(nodes[0])<<"\n";
    return 0;
}
