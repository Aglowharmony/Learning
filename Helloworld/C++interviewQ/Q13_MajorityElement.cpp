/*
Question 13: Q13_MajorityElement
Description: Find majority element (>n/2) using Boyer-Moore voting algorithm.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q13_MajorityElement.cpp -O2 -Wall -o Q13_MajorityElement
Run: ./Q13_MajorityElement
*/

#include <bits/stdc++.h>
using namespace std;
int majorityElement(const vector<int>& a){
    int count = 0, candidate = 0;
    for(int x : a){
        if(count==0) candidate = x;
        count += (x==candidate)?1:-1;
    }
    return candidate;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    cout<<majorityElement(a)<<"\n";
    return 0;
}
