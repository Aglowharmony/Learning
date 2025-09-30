/*
Question 47: Q47_DeadlockExampleAndAvoidance
Description: Example of deadlock and a strategy to avoid it (std::lock).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q47_DeadlockExampleAndAvoidance.cpp -O2 -Wall -o Q47_DeadlockExampleAndAvoidance
Run: ./Q47_DeadlockExampleAndAvoidance
*/

#include <bits/stdc++.h>
using namespace std;
mutex a,b;
void deadlock(){
    lock_guard<mutex> la(a);
    this_thread::sleep_for(chrono::milliseconds(10));
    lock_guard<mutex> lb(b);
    cout<<"Deadlock example (might hang)\n";
}
void safe(){
    // Use std::lock to avoid deadlock (locks both without ordering issues)
    unique_lock<mutex> la(a, defer_lock), lb(b, defer_lock);
    lock(la, lb);
    cout<<"Acquired both safely\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    thread t1(deadlock), t2(deadlock);
    t1.detach(); t2.detach();
    // demonstrate safe acquisition
    safe();
    return 0;
}
