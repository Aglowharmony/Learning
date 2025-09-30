/*
Question 37: Q37_LongestIncreasingSubsequence
Description: LIS in O(n log n) using patience sorting trick.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q37_LongestIncreasingSubsequence.cpp -O2 -Wall -o Q37_LongestIncreasingSubsequence
Run: ./Q37_LongestIncreasingSubsequence
*/

#include <bits/stdc++.h>
using namespace std;
// O(n log n)
int lis(const vector<int>& a){
    vector<int> tails;
    for(int x: a){
        auto it = lower_bound(tails.begin(), tails.end(), x);
        if(it==tails.end()) tails.push_back(x);
        else *it = x;
    }
    return tails.size();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    cout<<lis(a)<<"\n";
    return 0;
}
