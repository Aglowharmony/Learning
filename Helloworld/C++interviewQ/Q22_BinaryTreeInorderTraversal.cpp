/*
Question 22: Q22_BinaryTreeInorderTraversal
Description: Inorder traversal iterative (stack) and recursive.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q22_BinaryTreeInorderTraversal.cpp -O2 -Wall -o Q22_BinaryTreeInorderTraversal
Run: ./Q22_BinaryTreeInorderTraversal
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
// Inorder recursive
void inorderRec(Node* root){
    if(!root) return;
    inorderRec(root->left);
    cout<<root->val<<" ";
    inorderRec(root->right);
}
// Inorder iterative
void inorderIter(Node* root){
    stack<Node*> st;
    Node* cur = root;
    while(cur || !st.empty()){
        while(cur){ st.push(cur); cur = cur->left; }
        cur = st.top(); st.pop();
        cout<<cur->val<<" ";
        cur = cur->right;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input: n followed by n values, -1 denotes null in level order
    int n; if(!(cin>>n)) return 0;
    vector<int> vals(n);
    for(int i=0;i<n;i++) cin>>vals[i];
    // Build tree assuming complete binary tree mapping for demonstration
    vector<Node*> nodes(n,nullptr);
    for(int i=0;i<n;i++) if(vals[i]!=-1) nodes[i]=new Node(vals[i]);
    for(int i=0;i<n;i++){
        if(!nodes[i]) continue;
        int l = 2*i+1, r = 2*i+2;
        if(l<n) nodes[i]->left = nodes[l];
        if(r<n) nodes[i]->right = nodes[r];
    }
    Node* root = nodes[0];
    inorderRec(root); cout<<"\n";
    inorderIter(root); cout<<"\n";
    return 0;
}
