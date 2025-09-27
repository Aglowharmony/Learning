/*
Question 16: Q16_LinkedListReverse
Description: Reverse a singly linked list iteratively and recursively.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q16_LinkedListReverse.cpp -O2 -Wall -o Q16_LinkedListReverse
Run: ./Q16_LinkedListReverse
*/

#include <bits/stdc++.h>
using namespace std;
struct Node { int val; Node* next; Node(int v): val(v), next(nullptr) {} };
Node* reverseIter(Node* head){
    Node* prev=nullptr; Node* cur=head;
    while(cur){ Node* nx = cur->next; cur->next = prev; prev = cur; cur = nx; }
    return prev;
}
Node* reverseRec(Node* head){
    if(!head || !head->next) return head;
    Node* p = reverseRec(head->next);
    head->next->next = head;
    head->next = nullptr;
    return p;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    Node* head=nullptr; Node* tail=nullptr;
    for(int i=0;i<n;i++){ int v; cin>>v; Node* node=new Node(v); if(!head) head=tail=node; else { tail->next=node; tail=node; } }
    head = reverseIter(head);
    for(Node* p=head;p;p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    head = reverseRec(head); // restore using recursion
    for(Node* p=head;p;p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    // Note: memory not freed for brevity
    return 0;
}
