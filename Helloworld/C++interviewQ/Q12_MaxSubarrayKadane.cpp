/*
Question 12: Q12_MaxSubarrayKadane
Description: Maximum subarray sum using Kadane's algorithm.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q12_MaxSubarrayKadane.cpp -O2 -Wall -o Q12_MaxSubarrayKadane
Run: ./Q12_MaxSubarrayKadane
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long best = LLONG_MIN, cur = 0;
    for(int i=0;i<n;i++){
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    cout<<best<<"\n";
    return 0;
}
