/*
Question 25: Q25_IsValidBST
Description: Validate if a binary tree is a binary search tree.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q25_IsValidBST.cpp -O2 -Wall -o Q25_IsValidBST
Run: ./Q25_IsValidBST
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
bool isValidBST(Node* root, long long low, long long high){
    if(!root) return true;
    if(root->val <= low || root->val >= high) return false;
    return isValidBST(root->left, low, root->val) && isValidBST(root->right, root->val, high);
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
    cout<<(isValidBST(nodes[0], LLONG_MIN, LLONG_MAX) ? "Valid BST\n" : "Not a BST\n");
    return 0;
}
