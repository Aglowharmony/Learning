/*
Question 42: Q42_SmartPointersUsage
Description: Demonstrate unique_ptr, shared_ptr, weak_ptr usage and pitfalls.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q42_SmartPointersUsage.cpp -O2 -Wall -o Q42_SmartPointersUsage
Run: ./Q42_SmartPointersUsage
*/

#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    shared_ptr<Node> next;
    Node(int v): val(v) { cout<<"Node "<<v<<" created\n"; }
    ~Node(){ cout<<"Node "<<val<<" destroyed\n"; }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    {
        unique_ptr<int> up(new int(42));
        cout<<"unique_ptr value: "<<*up<<"\n";
        shared_ptr<int> sp1 = make_shared<int>(100);
        shared_ptr<int> sp2 = sp1;
        cout<<"shared count: "<<sp1.use_count()<<"\n";
        weak_ptr<int> wp = sp1;
        if(auto locked = wp.lock()) cout<<"locked: "<<*locked<<"\n";
        // Demonstrate cycle problem with shared_ptr
        auto a = make_shared<Node>(1);
        auto b = make_shared<Node>(2);
        a->next = b;
        b->next = a; // creates cycle -> memory leak unless weak_ptr used
        cout<<"End of scope, cycle prevents destruction of nodes\n";
    }
    cout<<"Exited inner scope\n";
    return 0;
}
