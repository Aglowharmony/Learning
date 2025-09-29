/*
Question 21: Q21_ImplementQueueUsingStacks
Description: Implement queue operations using two stacks.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q21_ImplementQueueUsingStacks.cpp -O2 -Wall -o Q21_ImplementQueueUsingStacks
Run: ./Q21_ImplementQueueUsingStacks
*/

#include <bits/stdc++.h>
using namespace std;
// Implement queue with two stacks (amortized efficient)
class MyQueue {
    stack<int> s1, s2;
    void shift(){
        if(s2.empty()){ while(!s1.empty()){ s2.push(s1.top()); s1.pop(); } }
    }
public:
    void push(int x){ s1.push(x); }
    int pop(){ shift(); int v = s2.top(); s2.pop(); return v; }
    int peek(){ shift(); return s2.top(); }
    bool empty(){ return s1.empty() && s2.empty(); }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    MyQueue q;
    string op;
    while(cin>>op){
        if(op=="push"){ int v; cin>>v; q.push(v); cout<<"ok\n"; }
        else if(op=="pop"){ if(q.empty()) cout<<"empty\n"; else cout<<q.pop()<<"\n"; }
        else if(op=="peek"){ if(q.empty()) cout<<"empty\n"; else cout<<q.peek()<<"\n"; }
        else if(op=="exit") break;
    }
    return 0;
}
