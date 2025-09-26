/*
Question 06: Q06_TwoSum
Description: Two-sum problem using hash map to return indices.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q06_TwoSum.cpp -O2 -Wall -o Q06_TwoSum
Run: ./Q06_TwoSum
*/

#include <bits/stdc++.h>
using namespace std;
// Returns indices of two numbers that add up to target (0-based).
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long target;
    if(!(cin>>n>>target)) return 0;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<long long,int> mp;
    for(int i=0;i<n;i++){
        long long need = target - a[i];
        if(mp.count(need)){
            cout<<mp[need]<<" "<<i<<"\n";
            return 0;
        }
        mp[a[i]] = i;
    }
    cout<<"No solution\n";
    return 0;
}
