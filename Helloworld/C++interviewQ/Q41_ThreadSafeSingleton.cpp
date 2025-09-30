/*
Question 41: Q41_ThreadSafeSingleton
Description: C++11 thread-safe Meyers singleton and double-checked locking example.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q41_ThreadSafeSingleton.cpp -O2 -Wall -o Q41_ThreadSafeSingleton
Run: ./Q41_ThreadSafeSingleton
*/

#include <bits/stdc++.h>
using namespace std;
// Meyers' Singleton (thread-safe since C++11)
class Singleton {
    Singleton() { cout<<"Constructed\n"; }
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton& instance(){
        static Singleton inst;
        return inst;
    }
    void hello(){ cout<<"Hello from singleton\n"; }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    auto &s = Singleton::instance();
    s.hello();
    return 0;
}
