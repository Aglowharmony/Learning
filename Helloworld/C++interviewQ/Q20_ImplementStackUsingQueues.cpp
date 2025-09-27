/*
Question 20: Q20_ImplementStackUsingQueues
Description: Implement stack operations using two queues.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q20_ImplementStackUsingQueues.cpp -O2 -Wall -o Q20_ImplementStackUsingQueues
Run: ./Q20_ImplementStackUsingQueues
*/

#include <bits/stdc++.h>
using namespace std;
// Implement stack using two queues (push costly)
class MyStack {
    queue<int> q1, q2;
public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){ q2.push(q1.front()); q1.pop(); }
        swap(q1,q2);
    }
    int pop(){
        int v = q1.front(); q1.pop(); return v;
    }
    int top(){ return q1.front(); }
    bool empty(){ return q1.empty(); }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    MyStack st;
    string op;
    while(cin>>op){
        if(op=="push"){ int v; cin>>v; st.push(v); cout<<"ok\n"; }
        else if(op=="pop"){ if(st.empty()) cout<<"empty\n"; else cout<<st.pop()<<"\n"; }
        else if(op=="top"){ if(st.empty()) cout<<"empty\n"; else cout<<st.top()<<"\n"; }
        else if(op=="exit") break;
    }
    return 0;
}
