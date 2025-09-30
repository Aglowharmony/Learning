/*
Question 43: Q43_MoveSemanticsAndRvalue
Description: Show move constructor/assignment and RVO benefits.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q43_MoveSemanticsAndRvalue.cpp -O2 -Wall -o Q43_MoveSemanticsAndRvalue
Run: ./Q43_MoveSemanticsAndRvalue
*/

#include <bits/stdc++.h>
using namespace std;
struct Big {
    vector<int> data;
    Big(int n=0){ data.resize(n); cout<<"Construct "<<n<<"\n"; }
    Big(const Big& o): data(o.data){ cout<<"Copy\n"; }
    Big(Big&& o) noexcept: data(move(o.data)){ cout<<"Move\n"; }
    Big& operator=(const Big& o){ data=o.data; cout<<"CopyAssign\n"; return *this; }
    Big& operator=(Big&& o) noexcept { data = move(o.data); cout<<"MoveAssign\n"; return *this; }
};
Big makeBig(int n){ return Big(n); } // RVO / move
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Big a = makeBig(1000000); // likely moved or elided
    Big b = a; // copy
    Big c = move(a); // move
    return 0;
}
