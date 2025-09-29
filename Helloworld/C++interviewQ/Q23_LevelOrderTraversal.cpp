/*
Question 23: Q23_LevelOrderTraversal
Description: Level order (BFS) traversal of binary tree.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q23_LevelOrderTraversal.cpp -O2 -Wall -o Q23_LevelOrderTraversal
Run: ./Q23_LevelOrderTraversal
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* left; Node* right; Node(int v): val(v), left(nullptr), right(nullptr) {} };
void levelOrder(Node* root){
    if(!root) return;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            Node* cur = q.front(); q.pop();
            cout<<cur->val<<" ";
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        cout<<"\n";
    }
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
        if(l<n) nodes[i]->left = nodes[l];
        if(r<n) nodes[i]->right = nodes[r];
    }
    levelOrder(nodes[0]);
    return 0;
}
