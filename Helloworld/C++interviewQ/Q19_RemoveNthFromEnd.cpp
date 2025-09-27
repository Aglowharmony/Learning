/*
Question 19: Q19_RemoveNthFromEnd
Description: Remove N-th node from end of linked list in one pass.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q19_RemoveNthFromEnd.cpp -O2 -Wall -o Q19_RemoveNthFromEnd
Run: ./Q19_RemoveNthFromEnd
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* next; Node(int v): val(v), next(nullptr) {} };
Node* removeNthFromEnd(Node* head, int n){
    Node dummy(0); dummy.next = head;
    Node *fast = &dummy, *slow = &dummy;
    for(int i=0;i<n+1;i++) fast = fast->next;
    while(fast){ fast = fast->next; slow = slow->next; }
    Node* toDelete = slow->next; slow->next = toDelete->next;
    // delete toDelete; // optionally free
    return dummy.next;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int len; if(!(cin>>len)) return 0;
    Node* head=nullptr; Node* tail=nullptr;
    for(int i=0;i<len;i++){ int v; cin>>v; Node* node=new Node(v); if(!head) head=tail=node; else tail=tail->next=node; }
    int n; cin>>n;
    head = removeNthFromEnd(head, n);
    for(Node* p=head;p;p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    return 0;
}
