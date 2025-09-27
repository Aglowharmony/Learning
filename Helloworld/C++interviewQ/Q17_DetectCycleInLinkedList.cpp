/*
Question 17: Q17_DetectCycleInLinkedList
Description: Detect cycle in linked list using Floyd's algorithm and find cycle start.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q17_DetectCycleInLinkedList.cpp -O2 -Wall -o Q17_DetectCycleInLinkedList
Run: ./Q17_DetectCycleInLinkedList
*/

#include <bits/stdc++.h>
using namespace std;
struct Node { int val; Node* next; Node(int v): val(v), next(nullptr) {} };
Node* detectCycle(Node* head){
    Node* slow=head; Node* fast=head;
    while(fast && fast->next){
        slow=slow->next; fast=fast->next->next;
        if(slow==fast){ // found cycle, find entry
            slow = head;
            while(slow!=fast){ slow=slow->next; fast=fast->next; }
            return slow;
        }
    }
    return nullptr;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input: n nodes values, then index pos (-1 if no cycle)
    int n; if(!(cin>>n)) return 0;
    vector<Node*> nodes;
    for(int i=0;i<n;i++){ int v; cin>>v; nodes.push_back(new Node(v)); if(i) nodes[i-1]->next = nodes[i]; }
    int pos; cin>>pos;
    if(pos>=0 && pos<n) nodes.back()->next = nodes[pos];
    Node* entry = detectCycle(nodes.empty()?nullptr:nodes[0]);
    if(entry) cout<<"Cycle at node with value: "<<entry->val<<"\n";
    else cout<<"No cycle\n";
    return 0;
}
