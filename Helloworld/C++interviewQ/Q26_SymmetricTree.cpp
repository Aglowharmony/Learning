/*
Question 26: Q26_SymmetricTree
Description: Check if binary tree is symmetric (mirror).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q26_SymmetricTree.cpp -O2 -Wall -o Q26_SymmetricTree
Run: ./Q26_SymmetricTree
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
bool isMirror(Node* a, Node* b){
    if(!a && !b) return true;
    if(!a || !b) return false;
    return (a->val==b->val) && isMirror(a->left,b->right) && isMirror(a->right,b->left);
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
    cout<<(isMirror(nodes[0], nodes[0]) ? "Symmetric\n" : "Not symmetric\n");
    return 0;
}
