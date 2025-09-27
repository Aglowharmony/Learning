/*
Question 18: Q18_MergeTwoSortedLists
Description: Merge two sorted linked lists into one.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q18_MergeTwoSortedLists.cpp -O2 -Wall -o Q18_MergeTwoSortedLists
Run: ./Q18_MergeTwoSortedLists
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* next; Node(int v): val(v), next(nullptr) {} };
Node* mergeTwo(Node* a, Node* b){
    Node dummy(0); Node* tail = &dummy;
    while(a && b){
        if(a->val < b->val) { tail->next=a; a=a->next; }
        else { tail->next=b; b=b->next; }
        tail = tail->next;
    }
    tail->next = a? a : b;
    return dummy.next;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    Node *a=nullptr,*at=nullptr,*b=nullptr,*bt=nullptr;
    for(int i=0;i<n;i++){ int v; cin>>v; Node* node=new Node(v); if(!a)a=at=node; else at=at->next=node; }
    for(int i=0;i<m;i++){ int v; cin>>v; Node* node=new Node(v); if(!b)b=bt=node; else bt=bt->next=node; }
    Node* merged = mergeTwo(a,b);
    for(Node* p=merged;p;p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    return 0;
}
